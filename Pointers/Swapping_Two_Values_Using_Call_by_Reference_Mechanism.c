
// Swap two values using Call by Reference Mechanism.

#include <stdio.h>

void swap();

int main()
{
    int a, b;

    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);

    printf("The values before swapping a = %d , b = %d", a, b);
    swap(&a, &b);

    printf("\nThe values after swapping a = %d and b = %d", a, b);

    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nThe swapped values ptr1 and ptr2 are %d and %d", *ptr1, *ptr2);
}