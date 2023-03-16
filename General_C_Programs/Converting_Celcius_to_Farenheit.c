
// Converting Celcius to Farenheit

#include <stdio.h>

int main()
{
    float F,C,x;
    printf("Enter Celcius value: ");
    scanf("%f",& C);
    x=9*C/5;
    F=x+32;
    printf("F= %f",F);
    return 0;
}