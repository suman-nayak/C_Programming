 // Program to calculate the area of a circle using a function 
  #include<stdio.h>
float carea(float);
float main ()
{
	float rad, area;
	printf("Enter radious:");
	scanf("%f", &rad);
	area = carea(rad);
	printf("The area is:%f", area);
}
float carea(float rad)
{
	return(3.14 * rad * rad);
}