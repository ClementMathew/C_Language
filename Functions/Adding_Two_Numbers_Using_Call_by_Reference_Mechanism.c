
//Add Two Numbers Using Call by Reference Mechanism

#include <stdio.h>

int add();

int main()
{
    int num1,num2,ans;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    ans=add(&num1,&num2);
    printf("The Sum of the Numbers is %d",ans);
}

int add(int *a,int*b)
{
    int sum;
    sum=*a+*b;
    return sum;
}