#include <stdio.h>

void main()
{
    for(int i = 5; 0 < i; i--)
    {
        for(int j=i; j < 5; j++)
        {
            
            printf(" ");
        }

        for(int j = i; 0 < j; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}