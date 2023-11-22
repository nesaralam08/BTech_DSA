#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *tail ,*newnode;
int main()
{
    int n;
    printf("Enter the size of the node:\t");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
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
    node* temp;
    temp = tail->next;
    while(temp->next!=tail->next){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}