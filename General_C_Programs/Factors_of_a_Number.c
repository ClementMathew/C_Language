
// Factors of a Number

#include <stdio.h>

int main()
{
    int i,num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("\nThe factors of the numbers are ");
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d,",i);
        }
    }
    return 0;
}