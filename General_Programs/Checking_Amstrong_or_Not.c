
// Checking Amstrong Number or Not

#include <stdio.h>

int main()
{
    int num,temp,a,b=0;
    printf("Enter the three Digit Number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        a=num%10;
        b=b+(a*a*a);
        num=num/10;
    }
    if(b==temp){
        printf("it is an amstrong number");
    }
    else{
        printf("It is not an amstrong number");
    }
    return 0;
}