
// Arithametic Operations in C

#include <stdio.h>

int main()
{
    int a,b,sum=0,sub=0,mul=0,divi=0;
    printf("Enter the value of a: ");
    scanf("%d",& a);
    printf("Enter the value of b: ");
    scanf("%d",& b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    divi=a/b;
    printf("Sum of a and b is %d",sum);
    printf("\nDifference between a and b is %d",sub);
    printf("\nProduct of a and b is %d",mul);
    printf("\nFraction of a and b is %d",divi);
    return 0;
}