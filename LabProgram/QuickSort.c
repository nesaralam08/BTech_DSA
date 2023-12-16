#include<stdio.h>
int Partition(int arr[],int lb,int ub)
{
    int p = arr[lb];
    int s = lb;
    int e = ub;
    while(s<e){
        while(arr[s]<=p)
        {
            s++;
        }
        while(arr[e]>p)
        {
            e--;
        }
        if(s<e)
        {
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
        }
    }
    int temp = arr[lb];
    arr[lb] = arr[e];
    arr[e] = temp;
    return e;
}
void QuickSort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int x = Partition(arr,lb,ub);
        QuickSort(arr,lb,x-1);
        QuickSort(arr,x+1,ub);
    }
}
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
    QuickSort(arr,0,n-1);
    // print elements
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}