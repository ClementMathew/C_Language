
// Declare a Union Containing 5 String Variables Each With Length of C_SIZE Then Read and Display the Address of a Person

#include <stdio.h>
#define C_SIZE 50

void main()
{
    union Details
    {
        char Name[C_SIZE];
        char HouseName[C_SIZE];
        char CityName[C_SIZE];
        char State[C_SIZE];
        char PinCode[C_SIZE];
    } P1;

    printf("Enter the name : ");
    gets(P1.Name);

    printf("\nEnter the House name : ");
    gets(P1.HouseName);

    printf("\nEnter the City name : ");
    gets(P1.CityName);

    printf("\nEnter the state : ");
    gets(P1.State);

    printf("\nEnter the PinCode :");
    gets(P1.PinCode);

    printf("\n\nName : %s", P1.Name);
    printf("\nHouse name : %s", P1.HouseName);
    printf("\nCity name : %s", P1.CityName);
    printf("\nState : %s", P1.State);
    printf("\nEnter the PinCode : %s", P1.PinCode);
}