
// To Read, Display, Add, take Transpose and Product of Matrices Using Function 

#include <stdio.h>
#include <stdlib.h>

void Readmatrix(int A[100][100],int ,int );
void Displaymatrix(int A[100][100],int ,int );
void Addmatrix(int A[100][100],int B[100][100],int ,int );
void Transpose(int A[100][100],int ,int );
void Multiplymatrix(int A[100][100],int B[100][100],int ,int ,int );
void Exit();

int main()
{ 
    int A[100][100],B[100][100],row1,colmn1,row2,colmn2,option;
    printf("Enter the size of the matrix A ,rows and columns : ");
    scanf("%d %d",&row1,&colmn1);
    printf("\nEnter the matrix A : ");
    Readmatrix(A,row1,colmn1);
    printf("\nEnter the size of the matrix B ,rows and columns : ");
    scanf("%d %d",&row2,&colmn2);
    printf("\nEnter the matrix B : ");
    Readmatrix(B,row2,colmn2);

    printf("\nThe matrix A is : \n");
    Displaymatrix(A,row1,colmn1);
    printf("\nThe matrix B is : \n");
    Displaymatrix(B,row2,colmn2);

    printf("\nChoose any option... \n\n 1.Add  2.Multiply  3.Transpose 4.Exit ");
    printf("\n\nEnter the option : ");
    scanf("%d",&option);
    switch(option){
        case 1: if(row1==row2 && colmn1==colmn2){
                   Addmatrix(A,B,row1,colmn1);
                }
                else{
                   printf("\nIncompatable matrix, Cant add.");
                }
                break;
        case 2: if(colmn1==row2){
                   Multiplymatrix(A,B,row1,colmn1,colmn2);
                }
                else{
                   printf("\nIncompatable matrix, Cant mutliply.");
                }
                break;
        case 3: printf("\nTranspose of A is : \n");
                Transpose(A,row1,colmn1);
                printf("\nTranspose of B is  : \n");
                Transpose(B,row2,colmn2);
                break;
        case 4: Exit(0);
    }

}

void Readmatrix(int A[100][100],int row,int colmn)
{
    int i,j;
    printf("\nEnter the elements : ");
    for(i=0;i<row;i++){
        for(j=0;j<colmn;j++){
            scanf("%d",&A[i][j]);
        }
    }
}

void Displaymatrix(int A[100][100],int row,int colmn)
{
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<colmn;j++){
            printf("%d  ",A[i][j]);
        }
    printf("\n");
    }
}

void Addmatrix(int A[100][100],int B[100][100],int row,int colmn)
{
    int i,j,C[100][100];
    for(i=0;i<row;i++){
        for(j=0;j<colmn;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\nSum of matrixes is : \n");
    Displaymatrix(C,row,colmn);
}

void Transpose(int A[100][100],int row,int colmn)
{
    int i,j,C[100][100];
    for(i=0;i<row;i++){
        for(j=0;j<colmn;j++){
            C[j][i]=A[i][j];
        }
    }
    Displaymatrix(C,colmn,row);
}

void Multiplymatrix(int A[100][100],int B[100][100],int row1,int colmn1,int colmn2)
{
    int C[100][100],i,j,k;
    for(i=0;i<row1;i++){
        for(j=0;j<colmn2;j++){
            C[i][j]=0;
            for(k=0;k<colmn1;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nProduct of the matrixes are : \n");
    Displaymatrix(C,row1,colmn2);
}

void Exit()
{
    printf("\nOk. Have a nice day.");
}