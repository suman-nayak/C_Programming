#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};
int main() {
    struct Book b;
    printf("Enter title, author, pages, price:\n");
    scanf("%s %s %d %f", b.title, b.author, &b.pages, &b.price);
    printf("Book Details:\nTitle: %s\nAuthor: %s\nPages: %d\nPrice: %f\n", b.title, b.author, b.pages, b.price);
    return 0;
}
