#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
node * head=NULL,*NewNode,*temp;

//function for print all nodes
void print()
{
    temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

//function for add node at begin
void InsertBeg()
{
    NewNode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&NewNode->data);
    NewNode->next = 0;
    if(head==0)
    {
        printf("List is empty:");
        exit(0);
    }
    else
    {
        NewNode->next = head;
        head = NewNode;
    }
}

//function for insert node at end
void InsertEnd()
{
    temp = head;
    NewNode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&NewNode->data);
    NewNode->next = 0;
    while(temp->next!=0)
    {
        temp = temp->next;
    }
    temp->next = NewNode;
}

//Insert at specific position
void InsertSpecific(int p)
{
    temp = head;
    int i=1;
    while(i<p-1)
    {
        temp = temp->next;
        i++;
    }
    NewNode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&NewNode->data);
    NewNode->next = 0;
    NewNode->next = temp->next;
    temp->next = NewNode;
}
int main()
{
    int n,i;
    printf("Enter the size of node:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        NewNode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&NewNode->data);
        NewNode->next = 0;
        if(head==0)
        {
            head = temp = NewNode;
        }
        else
        {
            temp->next = NewNode;
            temp  = NewNode;
        }
    }
    int ch;
    printf("Do you want to add new node [0|1]:\t");
    scanf("%d",&ch);
    if(ch==1)
    {
        int c;
        printf("\n\nclick 1 for insert at begining\n");
        printf("click 2 for inset at end\n");
        printf("click 3 for insert at specific position");
        printf("\n\nEnter the choice =>\t");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                InsertBeg();break;
            case 2:
                InsertEnd();break;
            case 3:
                {
                    int pos;
                    printf("Enter the postion where you want to add node:\t");
                    scanf("%d",&pos);
                    if(pos>n)
                    {
                        printf("\n\nPosition Greater than list !!\n\n");
                    }
                    else if(pos==1)
                    {
                        InsertBeg();
                    }
                    else if(pos==n)
                    {
                        InsertEnd();
                    }
                    else
                    {
                        InsertSpecific(pos);
                    }
                }break;
            default:
                printf("Invalid Position !!");            
        }
    }
    print();
}