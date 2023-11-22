#include<stdio.h>
#define N 5

int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int data;
    if(rear==N-1)
    {
        printf("\nQueue if full");
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        printf("\nEnter New Data:\t");
        scanf("%d",&data);
        queue[rear] = data;
    }
    else
    {
        rear++;
        printf("\nEnter New Data:\t");
        scanf("%d",&data);
        queue[rear] = data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is full");
    }
    else
    {
        front++;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("\n Queue is full");
    }
    else{
        printf("\n\nThe front element is :%d",queue[front]);
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    while(1)
    {
        int ch;
        printf("\n\nclick 1 for enqueue:\n");
        printf("click 2 for dequeue:\n");
        printf("click 3 for peek:\n");
        printf("click 4 for display:\n");
        printf("click 0 for exit:\n");
        printf("\n\nEnter Choice =>\t");
        scanf("%d",&ch);
        if(ch==0)
            break;
        switch(ch)
        {
            case 1:
                enqueue();break;
            case 2:
                dequeue();break;
            case 3:
                peek();break;
            case 4:
                display();break;
            default:
                printf("\nInvalid Choice !!");break;                
        }    
    }
    display();
}