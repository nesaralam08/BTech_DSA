#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    int arr[n];

    // Scan all elements 👀
    for(i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",i+1);
        scanf("%d",&arr[i]);
    }

    // Sort Elements 🪄
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // print elements
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}