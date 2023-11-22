#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    node *head=NULL;
    head = (node*)malloc(sizeof(node));

    head->data = 78;
    head->next = NULL;

    printf("%d ",head->data);
}