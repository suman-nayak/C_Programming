#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;

    if (argc < 2) {
        printf("Usage: %s <your full name>\n", argv[0]);
        return 1;
    }

    printf("Your full name is: ");
    for (i = 1; i < argc; i++) {
        printf("%s", argv[i]);
        if (i != argc - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
