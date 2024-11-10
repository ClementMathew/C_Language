
// Factorial of a Given Natural Number n Using Recursive And Nonrecursive Functions

#include <stdio.h>

int factorial(int);

void main()
{
	int i, n, ans1, ans2, fact = 1;

	printf("Enter the number : ");
	scanf("%d", &n);

	ans1 = factorial(n);

	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	ans2 = fact;

	printf("\nAnswer by Recursion = %d", ans1);
	printf("\nAnswer by Non Recursion = %d", ans2);
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}