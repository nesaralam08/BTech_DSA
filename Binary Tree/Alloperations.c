#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*left,*right;
}node;
node * Create(node* root)
{
    int n;
    node * newnode = (node*)malloc(sizeof(int));
    printf("Enter Data [-1 for exit]:\t");
    scanf("%d",&n);
    if(n==-1)
    {
        return 0;
    }
    newnode->data = n;
    if(n<root->data)
    {
        newnode->left = Create(root);
    }
    else if(n>root->data)
    {
        newnode->right = Create(root);
    }
    return newnode;
}
void Inorder(node*root)
{
    if(root==NULL)
    {
        printf("Hello");
    }
    else{
        Inorder(root->left);
        printf("%d",root->data);
        Inorder(root->right);
    }
}
int main()
{
    node *root=(node*)malloc(sizeof(int));
    printf("Enter Root Data:\t");
    scanf("%d",&root->data);
    root = Create(root);
    Inorder(root);
}