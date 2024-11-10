
// Reading data in a file and displaying it

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char Data[50];

    f = fopen("read.txt", "r");

    if (f == NULL)
    {
        printf("Unable to open file");
        exit(1);
    }
    while (fgets(Data, 50, f) != NULL)
        fputs(Data, stdout);

    fclose(f);

    return 0;
}