#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

//function for insert data in stack
void push()
{
    int data;
    if(top==N-1)
    {
        printf("\nStack is full");
    }
    else
    {
        top++;
        printf("\nEnter Data:\t");
        scanf("%d",&data);
        stack[top] = data;
    }
}

//function for remove data
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        int item;
        item = stack[top];
        top--;
        printf("\nRemove element is %d ",item);
    }
}

//functio for see top element
void peek()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop Data is %d",stack[top]);
    }
}
//function for display stack data
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d  ",stack[i]);
    }
}
//see the no of element is stack
void see()
{
    printf("number of nodes:%d\n",top);  
}
int main()
{
    int n,i;
    printf("Enter the size of the stack:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        push();
    }
    
    int ch;
    printf("\nDo you want to continue [0|1]:\t");
    scanf("%d",&ch);
    if(ch==1)
    {
        int c;
        printf("click 1 for PUSH\n");
        printf("click 2 for  POP\n");
        printf("click 3 for  PEEK\n");
        printf("click 4 for to see no of element present in stack\n");
        printf("\n\nEnter Choice =>\t");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                push();break;
            case 2:
                pop();break;
            case 3:
                peek();break;
            case 4:
                see();break;    
            default:
                printf("\nInvalid Choice !!");            
        }
    }
    display();
}