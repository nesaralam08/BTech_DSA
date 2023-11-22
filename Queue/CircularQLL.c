#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *head=NULL,*newnode,*tail;

//Push new element
void enqueue()
{
    newnode = (node*)malloc(sizeof(node));
    int x;
    printf("Enter Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head == NULL)
    {
        head = tail= newnode;
        head->next = tail;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}
//Pop element
void dequeue()
{
    if(head==NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        node *temp;
        temp = head;
        head = temp->next;
        tail->next = head;
        free(temp);
        printf("\nSuccessfull");
    }
}
//display
void display()
{
    node *temp;
    temp = head;
    while(head!=temp->next)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
}
//peek
void peek()
{
    printf("\nThe top element is %d",head->data);
}
int main()
{
    while(1)
    {
        int ch;
        printf("\n\nclick 1 for enqueue\n");
        printf("click 2 for dequeue\n");
        printf("click 3 for peek\n");
        printf("click 4 for display\n");
        printf("click 0 for exit\n");
        printf("\n\nEnter Choice =>\t");
        scanf("%d",&ch);
        if(ch==0)
        {
            break;
        }
        switch(ch){
            case 1:
                enqueue();break;
            case 2:
                dequeue();break;
            case 3:
                peek();break;
            case 4:
                display();break;
            default:
                printf("Invalid Choice !!");                
        }
    }
    display();
}