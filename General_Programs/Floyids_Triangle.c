
// Floyid's Triangle

#include <stdio.h>

int main()
{
    int i, j, number = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}