
// Display Day of the Week Using Switch Case

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Day number between 1 and 7: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Day of the week is Sunday");
        break;
        case 2:
        printf("Day of the week is Monday");
        break;
        case 3:
        printf("Day of the week is Tuesday");
        break;
        case 4:
        printf("Day of the week is Wednesday");
        break;
        case 5:
        printf("Day of the week is Thurshday");
        break;
        case 6:
        printf("Day of the week is Friday");
        break;
        case 7:
        printf("Day of the week is Saturday");
        break;
    }
    return 0;
}