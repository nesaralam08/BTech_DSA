#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *front = 0;
node *rear = 0;

void enqueue()
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("\nEnter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(front==0 && rear==0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    node *temp;
    temp = front;
    if(front==0 && rear==0)
    {
        printf("\nQueue is empty");
    }
    else
    {
        front = temp->next;
        free(temp);
    }
}
void peek()
{
    if(front==0 && rear==0)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nThe front element is :%d",front->data);
    }
}
void display(){
    node *temp;
    temp = front;
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp = temp->next;
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