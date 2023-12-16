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
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // print elements
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}