#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int a;
    struct node *link;
}node;
int main()
{
    node *head=NULL,*newnode,*temp,*prevnode;
    int n;
    printf("Enter the size of node :\t");
    scanf("%d",&n);

    // create node of size n
    
    for(int i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->a);
        newnode->link =0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
    }

    //delete node at first

    /* temp = head;
    head = temp->link;
    free(temp); */

    //delete from end

    /*temp = head;
    while(temp->link!=0)
    {
        prevnode = temp;
        temp = temp->link;
    }
    prevnode->link = NULL;
    free(temp);*/

    //delete node at specific position

    /*int pos;
    printf("Enter the position U want to delete node :\t");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Invalid Position");
    }
    temp = head;
    for(int i=1;i<pos;i++)
    {
        prevnode = temp;
        temp = temp->link;
    }
    prevnode->link = temp->link;
    free(temp);*/

    temp = head;
    while(temp!=0)
    {
        printf("%d  ",temp->a);
        temp = temp->link;
    }
}
