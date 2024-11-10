
// Converting Fareheit to Celcius

#include <stdio.h>

int main()
{
    float F, C, x;

    printf("Enter the fareheit value: ");
    scanf("%f", &F);

    x = F - 32;
    C = x * 5 / 9;

    printf("C = %f", C);

    return 0;
}