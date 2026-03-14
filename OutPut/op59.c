#include <stdio.h>
int main() {
int a[2][2] = {{1, 2}, {3, 4}};
printf("%d", **a); // Accessing the first element of the 2D array
}