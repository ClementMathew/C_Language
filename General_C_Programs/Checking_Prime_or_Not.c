
// Checking Prime or Not

#include <stdio.h>

int main()
{
    int i,num,count=0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            count=count+1;
        }
    }
    if(count>0){
        printf("Its not a prime number");
    }
    else{
        printf("Its a prime number");
    }
    return 0;
}