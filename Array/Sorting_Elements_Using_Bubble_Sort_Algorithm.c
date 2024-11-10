
// bubble sorting

#include <stdio.h>

int main()
{
    int n, i, j, a[100], temp;

    printf("Enter the number of element in the array: ");
    scanf("%d", &n);

    printf("Enter the values of elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Bubble sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}