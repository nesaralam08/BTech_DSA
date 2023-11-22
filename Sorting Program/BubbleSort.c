#include<stdio.h>
//function for scan element
void ScanArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",(i+1));
        scanf("%d",&arr[i]);
    }
}
//function for sort element
void sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//function for print element
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
// void shuffle(int a,int b)
// {
//     int t=a;
//     a=b;
//     b=t;
// }
int main()
{
    int arr[100],n;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    ScanArr(arr,n);
    sort(arr,n);
    print(arr,n);
}