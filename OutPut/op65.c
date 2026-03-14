#include <stdio.h>
int main() {
int a[3] = {10, 20, 30};
printf("%d", *(&a[0] + 2));
}