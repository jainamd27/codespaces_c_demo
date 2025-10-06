// #include <stdio.h>

// int main()
// {
//     int n = 5; // height of the pattern
//     printf("  *\n");

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             // Conditions to print '1'
//             if (j == n / 2 || (i == n - 1 && j != n / 2))
//                 printf("*");
//             else if (i == 0 && j == n / 2 - 1)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 5; // height of the pattern

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // Conditions to print '1'
            if (j == n / 2 || (i == n - 1 && j != n / 2))
                printf("*");
            else if (i == 1 && j == n / 2-1 )
                printf("*");
            else if(i == 2 && j == n/ 3-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

