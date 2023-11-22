#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}node;

int main()
{
    node *head=NULL,*temp,*newnode;
    int size,selem;
    printf("Enter the size of node :\t");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter %d Data:\t",(i+1));
        scanf("%d",&newnode->val);
        newnode->next = 0;
        if(head==NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Enter search element:\t");
    scanf("%d",&selem);

    temp = head;
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        if(temp->val==selem)
        {
            printf("Element found at %d node ",(i+1));
            cnt++;
            break;
        }
        temp = temp->next;
    }
    if(cnt==0)
    {
        printf("Element not present in the node !!");
    }
}