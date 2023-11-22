#include<stdio.h>

int main()
{
    int arr[100],n;
    printf("Enter the size of array:\t");
    scanf("%d",&n);

    //read all element
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t");
        scanf("%d",&arr[i]);
    }
    //sorting
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    //print the array element 
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}