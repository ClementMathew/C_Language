
// Read and Print Elements of an Array Using Pointers

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr = arr;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("\nEnter elements in array : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("The Array elements : ");

    for (i = 0; i < n; i++)
    {
        printf("%d, ", *(ptr + i));
    }
    return 0;
}