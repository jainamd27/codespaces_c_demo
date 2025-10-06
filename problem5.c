// #include <stdio.h>

// int main() {
//     int rows;
//     char ch = '*'; // The character to be used for printing H

//     printf("Enter the number of rows for the H pattern (odd number recommended): ");
//     scanf("%d", &rows);

//     // Ensure 'rows' is at least 3 for a recognizable H
//     if (rows < 3) {
//         printf("Number of rows must be at least 3.\n");
//         return 1;
//     }

//     // Loop for each row
//     for (int i = 0; i < rows; i++) {
//         // Print the left vertical bar
//         printf("%c", ch);

//         // Print spaces between the vertical bars
//         for (int j = 0; j < rows - 2; j++) {
//             // Print the middle horizontal bar
//             if (i == rows / 2) { 
//                 printf("%c", ch);
//             } else {
//                 printf(" ");
//             }
//         }

//         // Print the right vertical bar
//         printf("%c", ch);
//         printf("\n"); // Move to the next line after each row
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 5; // size of the pattern

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Top line of J
            if (i == 0)
                printf("*");
            // Vertical line on the right side
            else if (j == n - 1)
                printf("*");
            // Bottom curve of J
            else if (i == n - 1 && j > 0 && j < n - 1)
                printf("*");
            // // The hook part of J
            else if (i == n - 2 && j == 0)
                printf("*");
            // else
            //     printf(" ");
        }
        printf("\n");
    }

    return 0;
}
