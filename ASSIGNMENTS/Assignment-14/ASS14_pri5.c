#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fs, *ft;
    int ch;

    if (argc != 3) {
        printf("Usage: %s <source> <target>\n", argv[0]);
        return 1;
    }

    fs = fopen(argv[1], "r");
    if (!fs) {
        printf("Cannot open source file.\n");
        return 1;
    }

    ft = fopen(argv[2], "w");
    if (!ft) {
        printf("Cannot open target file.\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, ft);

    fclose(fs);
    fclose(ft);
    printf("Copy done.\n");
    return 0;
}

