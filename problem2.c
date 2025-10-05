#include <stdio.h>

int main()
{
    char ch = 'a';
    int num = 1;

    for (int i = 1; i <= 6; i++) // total rows
    {
        int count = i; // each row increases by 1

        for (int j = 1; j <= count; j++)
        {
            if (i % 2 != 0) // odd row → numbers
            {
                printf("%d ", num++);
            }
            else // even row → letters
            {
                printf("%c ", ch++);
            }
        }
        printf("\n");
    }

    return 0;
}
