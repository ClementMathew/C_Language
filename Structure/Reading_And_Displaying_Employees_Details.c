
// Reading and displaying employees details

#include <stdio.h>

struct employee
{
	char Name[20];
	long int employeeId;
	long int salary;
};

int main()
{
	int n, i;
	struct employee a[100];

	printf("Enter the number of employees : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("\nEnter the details of Employee %d :", i);

		printf("\nName : ");
		scanf("%s", &a[i].Name);

		printf("\nEmployee ID : ");
		scanf("%ld", &a[i].employeeId);

		printf("\nSalary : ");
		scanf("%ld", &a[i].salary);
	}
	for (i = 1; i <= n; i++)
	{
		printf("\nThe Details of the Employees are : ");

		printf("\n\nEmployee No.%d", i);
		printf("\n\tName: %s", a[i].Name);
		printf("\n\tEmployee ID: %ld", a[i].employeeId);
		printf("\n\tSalary: %ld", a[i].salary);
	}
	return 0;
}