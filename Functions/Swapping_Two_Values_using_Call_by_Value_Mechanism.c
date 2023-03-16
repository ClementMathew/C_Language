
// Swap two values using Call by Value Mechanism.

#include <stdio.h>

void swap();

int main()
{   
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d %d",&a,&b);
    printf("The values before swapping a = %d , b = %d",a,b);
    swap(a,b);
    printf("\nThe values after swapping a = %d and b = %d",a,b);
    return 0;
}

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nThe swapped values x and y are %d and %d",x,y);
}