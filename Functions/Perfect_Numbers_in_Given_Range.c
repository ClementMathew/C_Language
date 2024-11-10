
// Printing all Perfect Numbers in given range using function

#include <stdio.h>

int perfectnum(int n);

int main()
{
    int i, start, stop, flag;

    printf("Enter the starting of the Range: ");
    scanf("%d", &start);

    printf("Enter the ending of the Range: ");
    scanf("%d", &stop);

    printf("The Perfect Numbers in the given Range are : ");

    for (i = start; i <= stop; i++)
    {
        flag = perfectnum(i);

        if (flag == 1)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}

int perfectnum(int n)
{
    int i, flag, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}