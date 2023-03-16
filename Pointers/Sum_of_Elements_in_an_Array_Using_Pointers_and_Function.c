
// Sum of Elements Stored in an Array Using Pointers and User Defined Function

#include <stdio.h>
#include <stdlib.h>

int Sum(int *,int);

int main()
{
    int i,n,ans,a[10];
    int *ptr = a;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    ans = Sum(ptr,n);
    printf("The sum of elements in array is %d",ans);
    return 0;
}

int Sum(int *ptr,int n)
{
    int i,ans=0;
    for(i=0;i<n;i++){
        ans += *(ptr+i);
    }
    return(ans);
}