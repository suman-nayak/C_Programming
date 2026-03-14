#include <stdio.h>
int main() {
int a[3] = {10, 20, 30};
int *p = &a[1];
printf("%d", p[-1]);
}