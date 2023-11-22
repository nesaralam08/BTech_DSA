#include<stdio.h>

void ScanArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",(i+1));
        scanf("%d",&arr[i]);
    }
}

void SortArr(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
int main()
{
    int arr[100],n;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    ScanArr(arr,n);
    SortArr(arr,n);
    print(arr,n);

}