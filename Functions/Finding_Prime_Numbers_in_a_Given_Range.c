
// Finding Prime Numbers in a given range using Function

#include <stdio.h>

int findprime(int n);

int main()
{
    int i,start,stop,flag;
    printf("Enter the starting of the Range: ");
    scanf("%d",&start);
    printf("Enter the ending of the Range: ");
    scanf("%d",&stop);
    printf("The Prime Numbers in the given Range are : ");
    for(i=start;i<=stop;i++){
        flag=findprime(i);
        if(flag==0){
            printf("%d, ",i);
        }
    }
    return 0;
}

int findprime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}