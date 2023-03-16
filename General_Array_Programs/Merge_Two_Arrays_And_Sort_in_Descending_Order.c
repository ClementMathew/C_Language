
// Program in C to Merge Two Arrays And Sort in Descending Order

#include <stdio.h>

void main()
{
    int First[10], Second[10], Merged[10], temp, n1, n2, n3, i, j;
	printf("Enter the Number of Elements to be stored in the First array : ");
    scanf("%d",&n1);
    printf("\nEnter the Elements in the array : ");
    for(i=0;i<n1;i++)
    {
	    scanf("%d",&First[i]);
	}
    printf("\nEnter the Number of Elements to be stored in the Second array : ");
    scanf("%d",&n2);
    printf("\nEnter the Elements in the array : ");
    for(i=0;i<n2;i++)
    {
	    scanf("%d",&Second[i]);
	}
    n3 = n1 + n2;
    for(i=0;i<n1;i++)
    {
        Merged[i] = First[i];
    }
    for(j=0;j<n2;j++)
    {
        Merged[i] = Second[j];
        i++; 
    }
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n3-1;j++)
        {
            if(Merged[j]<=Merged[j+1])
            {
                temp=Merged[j+1];
                Merged[j+1]=Merged[j];
                Merged[j]=temp;
            }
        }                      
    }
    printf("\nThe Merged Array in Decending Order is : ");
    for(i=0;i<n3;i++)
    {
        printf("%d  ", Merged[i]);
    }
}