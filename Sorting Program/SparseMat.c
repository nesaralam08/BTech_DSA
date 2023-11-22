#include<stdio.h>
int main()
{
    int arr[10][10],n,m,NewCol=0;
    printf("Enter Row and Column of the matrix:\t");
    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter A[%d][%d] Element:\t",(i+1),(j+1));
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=0)
            {
                NewCol++;
            }
        }
    }
    printf("col = %d\n\n",NewCol);

    int NewMat[3][NewCol],k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<NewCol;j++)
        {
            if(arr[i][j]!=0)
            {
                NewMat[0][k]=i;
                NewMat[1][k]=j;
                NewMat[2][k]=arr[i][j];
                k++; 
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<NewCol;j++)
        {
            printf("%d ",NewMat[i][j]);
        }
        printf("\n");
    }
}