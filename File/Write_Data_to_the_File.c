
// Writing data to the file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    char Data[50];

    f = fopen("write.txt", "w");

    if (f == NULL)
    {
        printf("\nUnable to open file");
        exit(1);
    }
    printf("Enter data (type 'exit' to stop) : ");
    do
    {
        fgets(Data, 50, stdin);

        if (strcmp(Data, "exit\n") == 0)
            break;

        fputs(Data, f);
    } while (1);

    fclose(f);

    return 0;
}