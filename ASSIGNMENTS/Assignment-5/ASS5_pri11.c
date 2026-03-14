//WAP to print Fibonacci series up to n terms.
#include <stdio.h>
int main()
{
    int f0 = 0, f1 = 1, f2, n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Fibonacci series: %d", f0);
    }
    else if (n == 2)
    {
        printf("Fibonacci series: %d %d", f0, f1);
    }
    else if (n > 2)
    {
        printf("Fibonacci series: %d \t %d ", f0, f1);
        for (i = 1; i <= n-2; i++)
        {
            f2 = f0 + f1;
            printf("%d ", f2);
            f0 = f1;
            f1 = f2;
        }
        printf("\n");
    }
    return 0;
}