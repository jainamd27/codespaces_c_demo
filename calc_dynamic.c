#include <stdio.h>

void main()
{
    int a;
    int b;
    char op;
    float c;

    printf("Enter number 1:");
    scanf("\n%d", &a);
    printf("Enter number 2:");
    scanf("\n%d", &b);
    printf("select the calculation operator:");
    scanf("\n%c", &op);

    if(op=='+')
    {
        c = a+b;
        printf("The answer is: %f", c);

    }
    else if(op=='-')
    {
        c = a-b;
        printf("The answer is: %f", c);
    }
    else if(op=='*')
    {
        c = a*b;
        printf("The answer is: %f", c);
    }
    else
    {
        c = (float)a/b;
        printf("The answer is: %.2f", c);
    }
}