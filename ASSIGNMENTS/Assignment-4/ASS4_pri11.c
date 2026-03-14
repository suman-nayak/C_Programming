// Program to calculate electricity bill based on unit consumption
#include<stdio.h>
int main ()
{
    int curMON, prevMON, total_unit;
    float total_bill;
    printf("Enter current month and previous month reading: ");
    scanf("%d %d", &curMON, &prevMON);
    total_unit = curMON - prevMON;
    if(total_unit <= 100)
    {  
        total_bill = total_unit * 3.20;
    }
    else if(total_unit <= 300)
    {
        total_bill = (100 * 3.20) + (total_unit - 100) * 5.40;
    } 
    else
    {
        total_bill = (100 * 3.20) + (200 * 5.40) + (total_unit - 300) * 6;
    }
    printf("Total electricity bill is: %f\n", total_bill);
    return 0;
}