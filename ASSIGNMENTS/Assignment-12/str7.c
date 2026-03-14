#include <stdio.h>
struct Distance {
    int kms;
    int metres;
};
struct Distance addDistance(struct Distance d1, struct Distance d2) {
    struct Distance d3;
    d3.kms = d1.kms + d2.kms;
    d3.metres = d1.metres + d2.metres;
    if (d3.metres >= 1000) {
        d3.kms += d3.metres / 1000;
        d3.metres = d3.metres % 1000;
    }
    return d3;
}
int main() {
    struct Distance d1, d2, d3;
    printf("Enter first distance (kms metres):\n");
    scanf("%d %d", &d1.kms, &d1.metres);
    printf("Enter second distance (kms metres):\n");
    scanf("%d %d", &d2.kms, &d2.metres);
    d3 = addDistance(d1, d2);
    printf("Sum = %d kms and %d metres\n", d3.kms, d3.metres);
    return 0;
}