#include<stdio.h>

void LinearSearch(int arr[],int n,int k)
{
    if(n==0)
    {
        printf("Element Not Found");
    }
    else if(arr[n]==k)
    {
        printf("Element Found At %d Position",n);
    }
    else{
        LinearSearch(arr,n-1,k);
    }
}
int main()
{
    int n,i,slem;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    int arr[n];
    // Read Elements 👀
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Search Element:\t");
    scanf("%d",&slem);
    LinearSearch(arr,n,slem);
}