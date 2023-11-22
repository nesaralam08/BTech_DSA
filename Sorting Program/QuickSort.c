#include<stdio.h>

int Partition(int arr[],int s,int e)
{
    int pivot = arr[0] ;
    int cnt = 0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    int PivotIndex = s+cnt;
    swap(PivotIndex,arr[s]);
    int i=s,j=e;
    while(i<PivotIndex && j>PivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j] >pivot)
        {
            j--;
        }
        if(i<PivotIndex && j>PivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return PivotIndex;
}
void QuickSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int p = Partition(arr,s,e);

    // left sort
    QuickSort(arr,s,(p-1));
    //right sort
    QuickSort(arr,(p+1),e);

}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b =t;

}
int main()
{
    int arr[100],n;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element:\t",(i+1));
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,(n-1));

    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}