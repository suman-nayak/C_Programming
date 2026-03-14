#include <stdio.h>

int main(void) {
    FILE *fp;
    int ch;
    long chars = 0, words = 0, blanks = 0, tabs = 0;
    int in_word = 0;
    char fname[100];

    printf("Enter file name: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (!fp) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ') blanks++;
        if (ch == '\t') tabs++;

        if (ch == ' ' || ch == '\t' || ch == '\n')
            in_word = 0;
        else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %ld\n", chars);
    printf("Words     : %ld\n", words);
    printf("Blanks    : %ld\n", blanks);
    printf("Tabs      : %ld\n", tabs);
    return 0;
}


