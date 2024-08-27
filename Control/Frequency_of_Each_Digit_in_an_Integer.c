//Frequency of Digits

#include<stdio.h>

int main()
{
    int i,n,a[100],j;
    long num,temp;
    printf("Enter the number: ");
    scanf("%ld",&num);
    for(i=0;i<=9;i++){
        a[i]=0;
    }
    temp=num;
    while(num>0)
    {
       n=num%10;
       num=num/10;
       a[n]++;
    } 
    printf("Frequency of each digits in the Integer is: \n");
    for(j=0;j<=9;j++){
        printf("Frequency of %d = %d\n",j,a[j]);
    }
	return 0;
}