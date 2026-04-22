#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 1200
#define BUFFER_SIZE 1024

float evaluate_expression(const char *expr) {
    float a, b;
    char op;
    if (sscanf(expr, "%f %c %f", &a, &op, &b) != 3) return 0;

    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

float convert_units(const char *input) {
    float value;
    char from[10], to[10];
    if (sscanf(input, "%f %s to %s", &value, from, to) != 3) return 0;

    if (strcmp(from, "cm") == 0 && strcmp(to, "m") == 0)
        return value / 100;
    else if (strcmp(from, "m") == 0 && strcmp(to, "cm") == 0)
        return value * 100;
    else
        return 0;
}

int main() {
    int server_sock, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addrlen = sizeof(client_addr);
    char buffer[BUFFER_SIZE], response[256];

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) {
        perror("Socket creation failed");
        exit(1);
    }

    int opt = 1;
    setsockopt(server_sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    if (bind(server_sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Bind failed");
        close(server_sock);
        exit(2);
    }

    printf("Server listening on port %d\n", PORT);
    listen(server_sock, 5);

    while (1) {
        client_sock = accept(server_sock, (struct sockaddr *)&client_addr, &addrlen);
        if (client_sock < 0) {
            perror("Accept failed");
            continue;
        }

        printf("Client connected.\n");

        while (1) {
            memset(buffer, 0, BUFFER_SIZE);
            int bytes_read = read(client_sock, buffer, BUFFER_SIZE - 1);
            if (bytes_read <= 0) {
                printf("Client disconnected.\n");
                break;
            }
            buffer[bytes_read] = '\0';

            printf("Client: %s\n", buffer);

            char *service = strtok(buffer, "|");
            char *input = strtok(NULL, "|");

            if (service && input) {
                if (strcmp(service, "calculator") == 0) {
                    float result = evaluate_expression(input);
                    snprintf(response, sizeof(response), "Result: %.2f", result);
                } else if (strcmp(service, "converter") == 0) {
                    float result = convert_units(input);
                    snprintf(response, sizeof(response), "Converted: %.2f", result);
                } else {
                    snprintf(response, sizeof(response), "Unknown service");
                }
            } else {
                snprintf(response, sizeof(response), "Invalid request format");
            }

            write(client_sock, response, strlen(response));
        }

        close(client_sock);
    }

    close(server_sock);
    return 0;
}

