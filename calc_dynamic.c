#include <stdio.h>

void main()
{
    int a;
    int b;
    char op;
    float c;

    printf("Enter number 1:\n");
    scanf("%d", &a);
    printf("Enter number 2:\n");
    scanf("%d", &b);
    printf("select the calculation operator:\n");
    scanf(" %c", &op);

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