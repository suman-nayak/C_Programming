#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, sum = 0;

    if (argc != 6) {
        printf("Usage: %s n1 n2 n3 n4 n5\n", argv[0]);
        return 1;
    }

    for (i = 1; i <= 5; i++)
        sum += atoi(argv[i]);

    printf("Sum = %d\n", sum);
    return 0;
}

