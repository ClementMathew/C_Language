
// Transpose of a matrix by passing the matrix as argument

#include <stdio.h>

void transpose(int, int, int[5][5]);

int main()
{
    int a[5][5], row, colmn;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &row, &colmn);

    printf("\nEnter the matrix elements : ");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colmn; j++)
        {
            printf("\nEnter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered matrix is : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colmn; j++)
        {
            printf("%d  ", a[i][j]);

            if (j == colmn - 1)
            {
                printf("\n");
            }
        }
    }
    printf("\nThe Transpose of the matrix is : \n");
    transpose(row, colmn, a);

    return 0;
}

void transpose(int row, int colmn, int a[5][5])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colmn; j++)
        {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }
}