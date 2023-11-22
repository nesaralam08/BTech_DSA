#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    node *head=0,*tail,*newnode;
    int n,i;
    printf("Enter the size of the nodes:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head==0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }
    tail = head;
    do{
        printf("%d ",tail->data);
        tail = tail->next;
    }while(tail->next!=head->next);
}