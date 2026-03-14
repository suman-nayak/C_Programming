// Program to find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c,d;
    float root1, root2;
    printf("Enter a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %f and Root 2 = %f", root1, root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same \n");
        printf("Root 1 = %f Root 2 = %f", root1, root2);
    }
    else
    {
        printf(" \n imaginary roots");
    }
    return 0;
}