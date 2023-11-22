#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    node *head=NULL,*temp,*newnode,*temp2;
    int n;
    printf("Enter the size of nodes:\t");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head==0)
        {
            head = temp= newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    int pos;
    printf("Enter position:\t");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Invalid Position");
        exit(0);
    }
    else
    {
        temp = head;
        for(int i=0;i<pos;i++)
        {
            temp = temp->next;
        }
        printf("Enter New Data:\t");
        scanf("%d",&newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    temp2 = head;
    while(temp2!=0)
    {
        printf("%d  ",temp2->data);
        temp2 = temp2->next;
    }
}