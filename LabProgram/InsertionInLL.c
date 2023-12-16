#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

node* head = NULL,*temp,*newnode;
int nodeCount = 0;
void InsBeg()
{
    newnode = (node*)malloc(sizeof(node));
    printf("Enter Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==NULL)
    {
        head = temp = newnode;
        nodeCount++;
    }
    else{
        newnode->next = head;
        head = newnode;
        nodeCount++;
    }
}
void InsSpecific()
{
    int pos;
    printf("\nEnter Valid Position:\t");
    scanf("%d",&pos);
    if(pos>nodeCount)
    {
        printf("Invalid Position");
    }
    else if(pos==1)
    {
        InsBeg();
    }
    else{
        int i = 1;
        temp  = head;
        newnode = (node*)malloc(sizeof(node));
        printf("Enter Data:\t");
        scanf("%d",&newnode->data);
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void InsEnd()
{
    newnode = (node*)malloc(sizeof(node));
    temp = head;
    printf("Enter Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    temp = newnode;
}
void Display(){

    temp = head;
    if(temp==NULL)
    {
        printf("List is empty\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int ch;
    do{
        printf("\n1 Insert Begining\n");
        printf("2 Insert Specific Position\n");
        printf("3 Insert End\n");
        printf("4 Display\n");
        printf("5 Exit\n");
        printf("\nEnter Choice =>\t\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                InsBeg();break;
            case 2:
                InsSpecific();break;
            case 3:
                InsEnd();break;
            case 4:
                Display();break;
            case 5:
                return -1;   break;     
            default:
                printf("\nInvalid Choice");            
        }
    }while(ch!=5);
}