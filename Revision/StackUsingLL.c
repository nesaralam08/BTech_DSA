#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*next;
}node;
node* top=0,*newnode,*temp;

void push(){
    newnode = (node*)malloc(sizeof(node));
    printf("Enter Data:\t");
    scanf("%d",&newnode->data);
    newnode->next = top;
    top = newnode;
}
void pop(){
    temp = top;
    if(top==0){
        printf("Stack is empty");
    }
    else{
        printf("The pop element is: %d",top->data);
        top = top->next;
        free(temp);
    }
}
int main(){

}