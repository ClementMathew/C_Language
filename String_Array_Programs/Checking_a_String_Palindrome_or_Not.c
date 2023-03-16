// Palindrome Or Not

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,count=0,n;
    printf("Enter the string: ");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
            count++;
        }
    }
    if(count>0){
        printf("this string is not a palindrome string");
    }
    else{
        printf("this is a palindrome string");
    }
    return 0;
}