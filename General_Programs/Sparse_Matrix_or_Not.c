// Find it sparse or not

#include <stdio.h>

void main()
{
    int r, c, i, j, size, sparse = 0;

    printf("Enter the no of rows and columns : ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    size = r * c;

    printf("Enter the matrix : ");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                sparse++;
            }
        }
    }
    if (sparse > size / 2)
    {
        printf("The matrix is sparse");
    }
    else
    {
        printf("The matrix is not sparse");
    }
}