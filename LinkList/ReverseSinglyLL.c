#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
struct node *head=NULL;

void Print(int n)
{
    node *temp;
    temp = head;
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp = temp->next;
    }
}

void Reverse(int n)
{
    node *prevNode,*currNode,*nextNode;
    prevNode = NULL;
    currNode = nextNode = head;
    while(nextNode!=0)
    {
        nextNode = nextNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    head =prevNode;
}
int main()
{
    node *temp,*newnode;
    int n;
    printf("Enter the size of node :\t");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head==NULL)
        {
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    Reverse(n);
    Print(n);
}