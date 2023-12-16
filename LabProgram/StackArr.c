#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;

void Push()
{
    if(top==N-1)
    {
        printf("\nStack is Full\n");
    }
    else{
        int x;
        printf("Enter Data:\t");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }
}
void Pop()
{
    if(top==N-1)
    {
        printf("\nStack is Empty\n");
    }
    else{
        printf("The POP Element is :%d",stack[top]);
        top--;
    }
}
void Peek()
{
    if(top==-1)
    {
        printf("\nStakc is Empty\n");
    }
    else{
        printf("The Top Element is :%d",stack[top]);
    }
}
void Display()
{
    int i = top;
    if(i==-1)
    {
        printf("\n Stack is Empty\n");
    }
    else{
        for(i=top;i>-1;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
int main()
{
    int ch;
    do{
        printf("\n1 Push\n");
        printf("2 POP \n");
        printf("3 PEEK\n");
        printf("4 DISPLAY\n");
        printf("5 EXIT\n");
        printf("\nEnter Choice =>\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Push();break;
            case 2:
                Pop();break;
            case 3:
                Peek();break;
            case 4:
                Display();break;
            case 5:
                return -1;
            default:
                printf("\nInvalid Choice\n");        
        }
    }while(ch!=5);
}