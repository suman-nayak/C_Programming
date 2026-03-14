// Convert total seconds into hours, minutes and seconds
#include<stdio.h>
int main ()
{
    int sec, min, hr, total_sec;
    printf("Enter time in seconds: ");
    scanf("%d", &total_sec);
    hr = total_sec / 3600;
    min = (total_sec % 3600) / 60;
    sec = total_sec % 60;
    printf("Time is %d hours, %d minutes and %d seconds\n", hr, min, sec);
    return 0;
}