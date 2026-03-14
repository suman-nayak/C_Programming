/*WAP to define a structure DISTANCE having members as kms and metres. Define a user-
defined function ADDDISTANCE () which will receive two structure variables as its arguments
and will return a structure variable. The ADDDISTANCE () will add two distance values.*/
#include <stdio.h>
    struct DISTANCE {
        int kms;
        int metres;
    };

    struct DISTANCE ADDDISTANCE(struct DISTANCE d1, struct DISTANCE d2) {
        struct DISTANCE result;
        result.kms = d1.kms + d2.kms;
        result.metres = d1.metres + d2.metres;

        if(result.metres >= 1000) {
            result.kms += result.metres / 1000;
            result.metres = result.metres % 1000;
        }

        return result;
    }
    int main ()
    {
    struct DISTANCE dist1, dist2, sum;

    printf("Enter first distance (kms metres): ");
    scanf("%d %d", &dist1.kms, &dist1.metres);

    printf("Enter second distance (kms metres): ");
    scanf("%d %d", &dist2.kms, &dist2.metres);

    sum = ADDDISTANCE(dist1, dist2);

    printf("Sum of distances: %d kms and %d metres\n", sum.kms, sum.metres);

    return 0;
    }
