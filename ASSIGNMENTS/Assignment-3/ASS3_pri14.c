// Convert distance in meters to kilometers and meters
#include<stdio.h>
int main ()
{
    int m, km;
    printf("Enter distance in meters: ");
    scanf("%d", &m);
    km = m / 1000;
    m = m % 1000;
    printf("Distance is %d kilometers and %d meters\n", km, m);
    return 0;
}