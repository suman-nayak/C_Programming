// Celsius to Fahrenheit conversion
#include<stdio.h>
int main ()
{
	float f, c;
	printf("Enter the celcious value is:");
	scanf("%f", &c);
	f = (9 / 5 * c) + 32;
	printf("the cel convert into far is:%f", f);
	return 0;
}
