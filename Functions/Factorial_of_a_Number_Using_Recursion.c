
// Finding Factorial of a Number Using Recursion

#include <stdio.h>

int factorial(int n);

int main()
{
    int n,ans;
    printf("Enter the Number : ");
    scanf("%d",&n);
    ans=factorial(n);
    printf("The factorial of the Number is %ld",ans);
}

int factorial(int n)
{
    if(n>=1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}