#include<stdio.h>
#include<stdlib.h>
#define N 5
int Queue[N];
int front = -1,rear = -1;

void Enqueue()
{
    int x;
    if(rear==N-1){
        printf("\nQueue is Full\n");
    }
    else if(front==-1 && rear==-1)
    {
        printf("Enter Data:\t");
        scanf("%d",&x);
        front = rear = 0;
        Queue[rear]  = x;
    }
    else{
        printf("Enter Data:\t");
        scanf("%d",&x);
        rear++;
        Queue[rear] = x;
    }
}
void Dequeue()
{
    if(front==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else if(front==-1 && rear==-1){
        printf("The Dequeue Element is :%d",Queue[front]);
        front = rear = 0;
    }
    else{
        printf("The Dequeue Element is :%d",Queue[front]);
        front++;
    }
}
void Front()
{
    if(front==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else{
        printf("The Front Element is :%d",Queue[front]);
    }
}
void Display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else{
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",Queue[i]);
        }
    }
}
int main()
{
    int ch;
    do{
        printf("\n1 Enqueue\n");
        printf("2 Dequeue \n");
        printf("3 Front\n");
        printf("4 Display\n");
        printf("5 EXIT\n");
        printf("\nEnter Choice =>\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Enqueue();break;
            case 2:
                Dequeue();break;
            case 3:
                Front();break;
            case 4:
                Display();break;
            case 5:
                return -1;
            default:
                printf("\nInvalid Choice\n");        
        }
    }while(ch!=5);
}