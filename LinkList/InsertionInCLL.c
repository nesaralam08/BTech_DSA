#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
node *tail=0,*temp,*newnode;

//print function
void print()
{
    temp = tail->next;
    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp->next!=tail->next);
    printf("%d ",temp->data);
}

// Insert at begining
void InsertBeg()
{
    newnode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp = tail->next;
    newnode->next = temp;
    tail->next = newnode;
}

//Insert at end
void InsertEnd()
{
    newnode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->next = tail->next;
    tail->next = newnode;
    tail = newnode;
}

//Insert at specific
void InsertSpecific(int pos)
{
    temp = tail->next;
    int i;
    while(i<pos-1)
    {
        temp = temp->next;
    }
    newnode = (node*)malloc(sizeof(node));
    printf("Enter New Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->next = temp->next;
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
        if(tail==0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
    }
    int ch;
    printf("Do You Want To  Add Node[0|1]:\t");
    scanf("%d",&ch);
    if(ch==1)
    {
        int c;
        printf("\n\nClick 1 for insert at begining\n");
        printf("Click 2 for insert at end\n");
        printf("Click 3 for insert at specific position:\n");
        printf("\n\nEnter Choice =>\t");
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
                    printf("Enter the position:\t");
                    scanf("%d",&pos);
                    if(pos>n)
                    {
                        printf("\nInvalid Position !!");
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
                printf("\nInvalid Choice !!");            
        }
    }
    print();
}