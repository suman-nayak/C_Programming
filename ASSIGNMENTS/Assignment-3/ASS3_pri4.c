// Area of Triangle using Heron's Formula
#include<stdio.h>
#include<math.h>
int main ()
{
	float a, b, c, s, area;
	printf("Enter the a, b, c:");
	scanf("%f%f%f", &a, &b, &c);
	s =(a + b + c) / 2;
	area = sqrt (s*(s-a)*(s-b)*(s-c));
	printf("the area of the tringle Is:%f", area);
	return 0;
}

