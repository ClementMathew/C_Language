
// Area of the Circle

#include <stdio.h>

int main()
{
    float pie=3.14;
    int r,Area=0;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    Area=pie*r*r;
    printf("Area of the circle is ");
    printf("%d",Area);
    return 0;
}