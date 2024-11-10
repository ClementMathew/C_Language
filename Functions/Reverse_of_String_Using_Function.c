
// Read a String to Array and Obtain its Reverse by User Defined Function

#include <stdio.h>
#include <string.h>

void Reverse(char[]);

int main()
{
    char str[100];

    printf("Enter the string : ");
    gets(str);

    Reverse(str);
    printf("Reversed string is : %s", str);
}

void Reverse(char str[])
{
    int n, i = 0, temp;

    n = strlen(str) - 1;
    
    while (i <= n)
    {
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        i++;
        n--;
    }
}