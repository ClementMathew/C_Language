
// Cube of a Number using Function

#include <stdio.h>

int findcube();

int main()
{
    printf("The Cube of the Number is %d", findcube());

    return 0;
}

int findcube()
{
    int num, cube;

    printf("Enter a Number: ");
    scanf("%d", &num);

    cube = num * num * num;

    return cube;
}