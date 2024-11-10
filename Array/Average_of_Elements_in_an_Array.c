
// Average of elements in an Array

#include <stdio.h>

int main()
{
    int n, nums, sum = 0;
    float Average;

    printf("Enter the number of elements stored in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums);
        sum = sum + nums;
    }
    Average = sum / n;
    printf("Sum of the elements in the array is %d", sum);
    printf("\nAverage of the elements in the array is %f", Average);

    return 0;
}