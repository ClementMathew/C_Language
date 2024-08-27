// Finding value of cos x

#include<stdio.h>
#include<conio.h>
void main()
{    int i;
     float x, sum=0,a, b; 
     printf(" Enter the value for x in degree : ");
     scanf("%f",&x);
     x=x*3.14159/180;
     a=(x*x)/2;
     b=(x*x*x*x)/24;
     sum=1-a+b;
    printf(" The value of Cos(%f) is : %.4f", x,sum);
    getch();
}