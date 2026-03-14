// Program to check whether the given sides can form a valid triangle
#include <stdio.h>
int main() 
{
    int side1, side2, side3;
    printf("Enter the three sides of the triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Sides must be positive values. Invalid input.\n");
    } 
    else
    {
        if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
        {
            printf("valid\n");
        } else
        {
            printf("invalid ");
        }
    }
    return 0;
}