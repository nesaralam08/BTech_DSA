#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*next;
}Node;
Node* top=NULL,*newnode;

void Push()
{
    newnode = (Node*)malloc(sizeof(Node));
    printf("Enter Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = top;
    top  = newnode;
}
void Pop()
{
    if(top==NULL)
    {
        printf("\nStack is Empty\n");
    }
    else{
        Node*temp = top;
        printf("The POP Element is :%d",top->data);
        top = top->next;
        free(temp);
    }
}
void Peek()
{
    if(top==NULL)
    {
        printf("\nStack is Empty\n");
    }
    else{
        printf("The TOP Element is :%d",top->data);
    }
}
void Display()
{
    Node*temp = top;
    if(temp==NULL)
    {
        printf("\nStack is Empty\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int ch;
    do{
        printf("\n1 Push\n");
        printf("2 POP \n");
        printf("3 PEEK\n");
        printf("4 DISPLAY\n");
        printf("5 EXIT\n");
        printf("\nEnter Choice =>\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Push();break;
            case 2:
                Pop();break;
            case 3:
                Peek();break;
            case 4:
                Display();break;
            case 5:
                return -1;
            default:
                printf("\nInvalid Choice\n");        
        }
    }while(ch!=5);
}