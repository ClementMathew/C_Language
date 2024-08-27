
// Concatinating Two Strings Without Using Library Functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int i=0,j=0;
    printf("Enter the First String: ");
    gets(str1);
    printf("Enter the Second String: ");
    gets(str2);
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Concatinated String is %s",str1);
    return 0;
}