#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;

node *head=0,*tail,*newnode,*temp;

int main()
{
    int n,i;
    printf("Enter the size of the nodes:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head = tail = newnode;
            head->next = newnode;
            head->prev = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
    }
    temp = head;
        do{
            printf("%d  ",temp->data);
            temp = temp->next;
        }while(temp!=tail);
        printf("%d ",temp->data);
}