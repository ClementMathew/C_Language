
// Declare a Union Containing 5 String Variables Each With Length of C_SIZE Then Read and Display the Address of a Person

#include<stdio.h>
#define C_SIZE 50

void main()
{
    union Details{
        char Name[C_SIZE];
        char Housename[C_SIZE];
        char Cityname[C_SIZE];
        char State[C_SIZE];
        char Pincode[C_SIZE];
    }P1;
    
    printf("Enter the name : ");
    gets(P1.Name);
    printf("\nEnter the House name : ");
    gets(P1.Housename);
    printf("\nEnter the City name : ");
    gets(P1.Cityname);
    printf("\nEnter the state : ");
    gets(P1.State);
    printf("\nEnter the PinCode :" );
    gets(P1.Pincode);

    printf("\n\nName : %s",P1.Name);
    printf("\nHouse name : %s",P1.Housename);
    printf("\nCity name : %s",P1.Cityname);
    printf("\nState : %s",P1.State);
    printf("\nEnter the PinCode : %s",P1.Pincode);
}