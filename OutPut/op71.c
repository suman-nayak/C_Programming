#include <stdio.h>
int main() {
char s1[] = "Hi", s2[] = "Hello";
printf("%lu", sizeof(s1) + sizeof(s2));
}