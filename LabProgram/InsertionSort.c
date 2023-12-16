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
    for(i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>-1 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    // print elements
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}