
// Display Algebraic Expression

#include <stdio.h>

int main()
{
    int a, b, c, x, y;

    printf("Enter the value of a :");
    scanf("%d", &a);

    printf("Enter the value of b :");
    scanf("%d", &b);

    printf("Enter the value of c :");
    scanf("%d", &c);

    printf("The Algebraic Expression is %dx+%dy=%d", a, b, c);

    return 0;
}