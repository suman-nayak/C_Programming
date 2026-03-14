#include <stdio.h>
#include <stdlib.h>
int main() {
    char *name;
    int size1, size2;

    printf("Enter maximum length for first name: ");
    scanf("%d", &size1);

    name = (char *)malloc(size1 * sizeof(char));

    if (name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your first name: ");
    scanf("%s", name);
    printf("Stored first name: %s\n", name);

    printf("Enter maximum length for full name: ");
    scanf("%d", &size2);

    name = (char *)realloc(name, size2 * sizeof(char));

    if (name == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter your full name (no spaces) : ");
    scanf("%s", name);
    printf("Stored full name: %s\n", name);

    free(name);
    return 0;
}
