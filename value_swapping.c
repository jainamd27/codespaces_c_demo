#include <stdio.h>

void main()
{
    float a,b,c;
    printf("Enter your value of a: \n");
    scanf("%f", &a);
    printf("Enter your value of b: \n");
    scanf("%f", &b);
    printf("Enter your value of c: \n");
    scanf("%f", &c);
    c = a;
    a = b;
    b = c;
    printf("new value of a: %f \n", a);
    printf("new value of b: %f \n", b);
    printf("new value of c: %f \n", c);
}