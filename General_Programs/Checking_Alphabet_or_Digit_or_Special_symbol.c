
// Checking Alphabet or Digit or Special symbol

#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c",&input);
    if((input>=65 && input<=90)||(input>=97 && input<=122)){
        printf("%c is an alphabet",input);
    }
    else if(input>=48 && input<=57){
        printf("%c is a digit",input);
    }
    else{
        printf("%c is a special symbol",input);
    }
    return 0;
}