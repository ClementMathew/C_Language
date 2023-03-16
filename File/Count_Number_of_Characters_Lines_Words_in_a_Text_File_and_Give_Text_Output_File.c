
// Counting the no of lines words and characters ina text file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f,*r;
    char ch;
    int lines=0,words=0,characters=0;
    f = fopen("read.txt","r");
    if(f==NULL)
        exit(1);
    printf("Reading file");
    do{
        ch = fgetc(f);
        if(ch == '\n' || ch == EOF)
           {
            lines++;
            words++;
           }
        if(ch == ' ')
            words++;
        characters++;
    }while(ch!=EOF);
    fclose(f);
    printf("\nWords: %d\nLines: %d\nCharacters: %d",words,lines,characters);
    r =fopen("write.txt","w");
    if(r==NULL)
        exit(1);
    fprintf(r,"Lines: %d\nWords: %d\nCharacters: %d",lines,words,characters);
    fclose(r);
    return 0;
}