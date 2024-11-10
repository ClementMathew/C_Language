
// linear search

#include <stdio.h>

int main()
{
    int n, i, a[100], num, count = 0;

    printf("Enter the number of elements stored in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            count = i;
        }
    }
    if (count > 0)
    {
        printf("We found it in the array at position %d", count + 1);
    }
    else
    {
        printf("Not found");
    }
    return 0;
}