// The sum of series 1!/1+2!/2+3!/3+4!/4+5!/5

#include <stdio.h>

int fact(int m)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        return m * fact(m - 1);
    }
}
void main()
{
    int n = 5, i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += (fact(i) / i);
    }
    printf("Sum = %d", sum);
}