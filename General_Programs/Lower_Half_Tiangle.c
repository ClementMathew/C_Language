// print lower half of a triangle

#include <stdio.h>

void main()
{
    int r, c, i, j, zero = 0;

    printf("Enter the no of rows and columns : ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter the matrix : ");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The lower half : ");

    for (i = 0; i < r; i++)
    {
        printf("\n");

        for (j = 0; j < c; j++)
        {
            if (i > j)
            {
                printf("%d  ", zero);
            }
            else
            {
                printf("%d  ", matrix[i][j]);
            }
        }
    }
}