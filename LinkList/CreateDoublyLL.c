//Create Doubly linkedlist 
// Insert at beb,end and specific postion

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;
struct node *head=0,*newnode,*tail,*temp;


//print all element of the node
void print()
{
    temp = head;
    printf("All the data in the nodes :\n");
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp = temp->next;
    }
}

//Insert at begining
void InsertBeg()
{
    newnode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->prev =0;
    newnode->next = 0;
    head->prev = newnode->next;
    newnode->next = head;
    head = newnode;
}

//Insert at end
void InsertEnd()
{
    newnode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->next =0;
    newnode->prev =0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

//Insert at specific position
void InsertSpecific(int p)
{
    temp = head;
    int i;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    for(i=1;i<p-1;i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}

int main()
{
    int n,i;
    printf("Enter the size of the node:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
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
    int ch;
    printf("Do you want to add new node [0|1]:\t");
    scanf("%d",&ch);
    if(ch==0)
    {
        exit(0);
    }
    else
    {
        int pos;
        printf("\n\n1. For Insert at begining\n");
        printf("2. For Insert at end\n");
        printf("3. For Insert at specific position\n");
        printf("\n\nEnter Your Choice -> ");
        scanf("%d",&pos);
        switch(pos)
        {
            case 1:
                InsertBeg();break;
            case 2:
                InsertEnd();break;
            case 3:
                {
                    int p;
                    printf("Enter the position:\t");
                    scanf("%d",&p);
                    if(p==1)
                    {
                        InsertBeg();
                    }
                    else if(p==n)
                    {
                        InsertEnd();
                    }
                    else
                    {
                        InsertSpecific(p);
                    }
                }break;
            default:
                printf("You Enter Invalid Position !!");            
        }
    }
    print();
}
