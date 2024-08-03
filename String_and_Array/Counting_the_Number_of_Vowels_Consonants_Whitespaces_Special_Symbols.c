
// Counting the Number of Vowels, Consonants, Whitespaces, Special Symbols

#include <stdio.h>

int main()
{
    char str[100];
    int i,vowels=0,consonants=0,whitespaces=0,specialsymbol=0;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i];i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if(str[i]==' '){
            whitespaces++;
        }
        else{
            specialsymbol++;
        }
    }
    printf("Vowels = %d\nConsonants = %d\nWhite Spaces = %d\nSpecial Symbols = %d",vowels,consonants,whitespaces,specialsymbol);
    return 0;
}