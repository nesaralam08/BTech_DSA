#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}node;
struct node* head=NULL,*temp;
void CreateLL()
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data:\t");
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
void Display()
{
    temp = head;
    int cnt =0;
    if(temp==NULL)
    {
        printf("List is empty\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
            cnt++;
        }
        printf("NULL\n");
        printf("No of Nodes:%d\n",cnt);
    }

}
int main()
{
    int ch;
    do{
        printf("\n1 Create Node\n");
        printf("2 Display Node\n");
        printf("3 Exit\n");
        printf("\nEnter Choice =>\t\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                CreateLL();break;
            case 2:
                Display();break;
            case 3:
                return -1;
            default:
                printf("\nInvalid Choice");            
        }
    }while(ch!=3);
}