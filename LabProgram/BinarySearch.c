#include<stdio.h>
#include<stdlib.h>
void BinarySearch(int arr[],int s,int n,int k)
{
    int mid,e=n;
    if(s>e)
    {
        printf("Element Not Found");
        exit(0);
    }
    mid = s+(e-s)/2;
    if(arr[mid]==k)
    {
        printf("Element Found At %d Position",mid+1);
    }
    else if(arr[mid]<k)
    {
        BinarySearch(arr,mid+1,n-1,k);
    }
    else{
        BinarySearch(arr,mid-1,n-1,k);
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
    BinarySearch(arr,0,n,slem);
}