#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;
node *head=0,*newnode,*current,*nextnode,*tail,*temp;

void Rotate()
{
    current = head;
    while(current!=0)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
}
int main()
{
    int n;
    printf("Enter the size of the nodes:\t");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if(head==0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    
    Rotate();

    temp = head;
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp = temp->next;
    }
}