#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fs, *ft;
    char src[100], dest[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", src);
    printf("Enter target file name: ");
    scanf("%99s", dest);

    fs = fopen(src, "r");
    if (!fs) {
        printf("Cannot open source file.\n");
        return 1;
    }

    ft = fopen(dest, "w");
    if (!ft) {
        printf("Cannot open target file.\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        fputc(ch, ft);
    }

    fclose(fs);
    fclose(ft);
    printf("Case converted and written to target file.\n");
    return 0;
}

