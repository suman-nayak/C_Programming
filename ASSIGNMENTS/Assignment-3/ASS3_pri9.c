// Fahrenheit to Celsius conversion
#include<stdio.h>
int main ()
{
	float f, c;
	printf("Enter the fahrenheit is:");
	scanf("%F", &f);
	c = (f - 32) * 5 / 9.0;
	printf("The far is convert into cal is:%f", c);
	return 0;
}

