
// Displaying Address and Details

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100];

    printf("Enter the Name : ");
    gets(a);

    printf("\nEnter the House Name : ");
    gets(b);

    printf("\nEnter th Pin code : ");
    scanf("%s", &c);

    printf("Name       : %s", a);
    printf("\nHouse Name : %s", b);
    printf("\nPin Code   : %s", &c);

    return 0;
}