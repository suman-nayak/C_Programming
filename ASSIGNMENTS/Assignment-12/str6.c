#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
};
struct Complex addComplex(struct Complex a, struct Complex b) 
{
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
int main() 
{
    struct Complex c1, c2, c3;
    printf("Enter first complex number (real imag):\n");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter second complex number (real imag):\n");
    scanf("%f %f", &c2.real, &c2.imag);
    c3 = addComplex(c1, c2);
    printf("Sum: %.f + %.fi\n", c3.real, c3.imag);
    return 0;
}

