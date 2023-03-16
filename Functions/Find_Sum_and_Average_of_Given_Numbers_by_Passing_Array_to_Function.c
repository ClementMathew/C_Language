
// Read an array containing n numbers and find sum and average of given numbers

#include <stdio.h>

int sum();

int main()
{
    int n,a[100],i,ans;
    float Average;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ans=sum(a,n);
    Average=ans/n;
    printf("The sum and average of the numbers are %d and %f",ans,Average);
}

int sum(int a[],int n)
{
    int add=0,i;
    for(i=0;i<n;i++){
        add+=a[i];
    }
    return add;
}