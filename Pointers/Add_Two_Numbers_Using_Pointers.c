
// Adding Two Numbers Using Pointers

#include <stdio.h>

void Add(int*,int*,int*);

int main()
{
    int a,b,sum;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    Add(&a,&b,&sum);
    printf("Sum is : %d",sum);
    return 0;
}

void Add(int *a,int *b,int *sum)
{
    *sum = *a + *b;
}