#include <stdio.h>

int main()
{
    int inp;
    int remainder;
    int store = 0;
    printf("Enter your number: \n");
    scanf("%d", &inp);
    while(inp != 0)
    {
        remainder = inp % 10;
        store = (10*store)+remainder;
        inp = inp/10;
                                   
    }
    printf("the reversed value is: %d", store);
}