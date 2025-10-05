#include <stdio.h>

void main()
{
    int i = 1;
    int j;

    // for (i = 1; i <= 10; i+=2)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         if(j%10==0)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }
    for(i=0; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
}