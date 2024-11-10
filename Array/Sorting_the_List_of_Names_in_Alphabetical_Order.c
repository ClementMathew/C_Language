// Alphabetical Order

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][100], temp[100];
    int i, j, n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names: ");
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    printf("\nNames in Alphabetical Order : \n");
    for (i = 0; i < n; i++)
    {
        puts(a[i]);
    }
    return 0;
}