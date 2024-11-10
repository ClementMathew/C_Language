
// Appending new data and displaying

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *f;

    char Data[50];
    f = fopen("read.txt", "r");

    if (f == NULL)
        exit(1);

    printf("Contents before appending : ");

    while (fgets(Data, 50, f) != NULL)
        fputs(Data, stdout);

    fclose(f);
    f = fopen("read.txt", "a");

    if (f == NULL)
        exit(1);

    printf("\nEnter contents to append (type 'exit'to stop): ");
    do
    {
        fgets(Data, 50, stdin);

        if (strcmp(Data, "exit\n") == 0)
            break;

        fputs(Data, f);
    } while (1);

    fclose(f);
    f = fopen("read.txt", "r");

    if (f == NULL)
        exit(1);

    printf("\nContents after appending: ");

    while (fgets(Data, 50, f) != NULL)
        fputs(Data, stdout);

    fclose(f);

    return 0;
}