
// Matrix Multiplication

#include <stdio.h>
 
int main()
{
    int r1, c1, r2, c2, i, j, k, sum = 0;
    int First[10][10], Second[10][10], Multiply[10][10];
 
    printf("Enter number of rows and columns of first matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("\nEnter elements of first matrix : \n");
    for (i = 0; i < r1; i++){
        for (j = 0; j < c1; j++){
            scanf("%d", &First[i][j]);
        }
    }
    printf("\nEnter number of rows and columns of second matrix : ");
    scanf("%d %d", &r2, &c2);
 
    if (c1 != r2){
        printf("\nThe multiplication isn't possible.");
    }
    else{
        printf("\nEnter elements of second matrix : \n");
        for (i = 0; i < r2; i++){
            for (j = 0; j < c2; j++){
                scanf("%d", &Second[i][j]);
            }
        }
        for (i = 0; i < r1; i++){
            for (j = 0; j < c2; j++){
                for (k = 0; k < r2; k++){
                    sum = sum + First[i][k]*Second[k][j];
                }
            Multiply[i][j] = sum;
            sum = 0;
            }
        }
        printf("\nProduct of the matrices : \n");
 
        for (i = 0; i < r1; i++){
            for (j = 0; j < c2; j++){
                printf("%d  ", Multiply[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}