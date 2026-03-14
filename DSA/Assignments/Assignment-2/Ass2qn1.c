/*WAP to define a structure POINT having elements as x and y. Enter two points and
then find out the distance between them.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    struct POINT
    {
        float x;
        float y;
    };
    struct POINT p1, p2;
    float distance;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f%f", &p1.x, &p1.y);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f%f", &p2.x, &p2.y);

    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    printf("Distance between the two points: %f\n", distance);

    return 0;
}