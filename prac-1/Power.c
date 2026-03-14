#include<stdio.h>
#include<math.h>
int main ()
{
    int base, ans, power;
    printf("Enter base and power:");
    scanf("%d%d", &base, &power);
    ans = pow(base, power);
    printf("the answer is:%d", ans);
    return 0;
}