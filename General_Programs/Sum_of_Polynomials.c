
// Sum of Polynomials

#include <stdio.h>

int main()
{
    int n1, n2, P1[100], P2[100], Sum[100], i;

    printf("Enter the degree of first polynomial : ");
    scanf("%d", &n1);

    printf("Enter the degree of second polynomial : ");
    scanf("%d", &n2);

    printf("Enter the coefficients of first polynomial : ");

    for (i = 0; i <= n1; i++)
    {
        scanf("%d", &P1[i]);
    }
    printf("Enter the coefficients of second polynomial : ");

    for (i = 0; i <= n2; i++)
    {
        scanf("%d", &P2[i]);
    }
    if (n1 = n2)
    {
        for (i = 0; i <= n1; i++)
        {
            Sum[i] = P1[i] + P2[i];
        }
        printf("The Polynomial is ");

        for (i = n1; i >= 0; i--)
        {
            printf("%dx^%d + ", Sum[i], i);
        }
    }
    else if (n1 > n2)
    {
        for (i = 0; i <= n1; i++)
        {
            Sum[i] = P1[i] + P2[i];
        }
        printf("The Polynomial is ");

        for (i = n1; i >= 0; i--)
        {
            printf("%dx^%d + ", Sum[i], i);
        }
    }
    else
    {
        for (i = 0; i <= n2; i++)
        {
            Sum[i] = P1[i] + P2[i];
        }
        printf("The Polynomial is ");

        for (i = n2; i >= 0; i--)
        {
            printf("%dx^%d + ", Sum[i], i);
        }
    }
    return 0;
}
