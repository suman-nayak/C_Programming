#include <stdio.h>
#include <math.h>
struct Point
{
    float xco;
    float yco;
};
int main()
{
    struct Point p1, p2;
    printf("Enter coordinates of Point 1 (x y):\n");
    scanf("%f %f", &p1.xco, &p1.yco);
    printf("Enter coordinates of Point 2 (x y):\n");
    scanf("%f %f", &p2.xco, &p2.yco);
    float distance = sqrt(pow(p2.xco - p1.xco, 2) + pow(p2.yco - p1.yco, 2));
    printf("Distance = %f\n", distance);
    return 0;
}

