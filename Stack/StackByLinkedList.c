#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
node *top=0;

//function for push back
void push()
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter Data:\t");
    scanf("%d ",&newnode->data);
    newnode->next = top;
    top = newnode;
}

//function for remove element from the top
void pop()
{
    node *temp;
    temp = top;
    if(top==0)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The Remove Element is %d ",temp->data);
    }
    top = temp->next;
    free(temp);
}

void peek()
{
    if(top==0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The Top Element is %d \n",top->data);
    }
}
// function for display
void display()
{
    node *temp;
    temp = top;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    int ch;
    do
    {
        printf("Which operation you want to perform in stack\n\n");
        printf("click 1 for add element in stack [Push_Back]\n");
        printf("click 2 for remove element from stack [Pop]\n");
        printf("click 3 for see top element in stack [Peek]\n");
        printf("click 0 for Exit and See all elements of stack\n");
        printf("\n\nEnter The Choice =>\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();break;
            case 2:
                pop();break;
            case 3:
                peek();break;
            case 0:
                break;
            default:
                printf("\nYour Enter Invalid Choice !!");    
        }
    }while(ch!=0);
    
    display();
}