#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*next;
}Node;

Node*front=NULL,*rear=NULL,*newnode;

void Enqueue()
{
    newnode = (Node*)malloc(sizeof(Node));
    printf("Enter Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(front==NULL && rear==NULL)
    {
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
void Dequeue()
{
    Node* temp = front;
    if(front==NULL)
    {
        printf("\nQueue is Empty");
    }
    else{
        front = temp->next;
        free(temp);
    }
}
void Front()
{
    if(front==NULL)
    {
        printf("\nQueue is Empty\n");
    }
    else{
        printf("The front element is :%d",front->data);
    }
}
void Display()
{
    Node*temp = front;
    if(front==NULL)
    {
        printf("\nQueue is Empty\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
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