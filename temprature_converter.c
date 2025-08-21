#include <stdio.h>

void main()
{
    float c_value;
    float f_value;
    printf("enter the temperature value in celcius: \n");
    scanf("%f", &c_value);
    f_value = (((float)9/5*c_value)+32);
    printf("The value in farheniet is: %f", f_value);
}