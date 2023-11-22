#include<stdio.h>
#define N 5
int queue[N];
int front=-1,rear=-1;

void enqueue()
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        int data;
        printf("Enter New Data:\t");
        scanf("%d",&data);
        queue[rear]=data;
    }
    else if (((rear+1)%N)==front)
    {
        printf("Queue is full");
    }
    else
    {
        rear = (rear+1)%N;
        int data;
        printf("Enter New Data:\t");
        scanf("%d",&data);
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The remove element is :%d",queue[front]);
        front = (front+1)%N;
    }
}
void display()
{
    int i = front;
    do{
        printf("%d ",queue[i]);
        i = (i+1)%N;
    }while(i!=rear);
    printf("%d ",queue[i]);
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("The top element is :%d",queue[front]);
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
