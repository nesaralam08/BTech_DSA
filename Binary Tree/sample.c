#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left,*right;
}node;

node* Create()
{
    int n;
    node* newnode = (node*)malloc(sizeof(int));
    printf("Enter Data [-1 For Exit]:\t");
    scanf("%d",&n);
    if(n==-1)
    {
        return 0;
    }
    newnode->data = n;
    printf("\nEnter Left Data:\t");
    newnode->left = Create();
    printf("\nEnter Right Data:\t");
    newnode->right = Create();
    return newnode;
}
void Inorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    else{
        Inorder(root->left);
        printf("%d",root->data);
        Inorder(root->left);
    }
}
node* MinGet(node*root)
{
    int min = root->data;
    while(root->left!=NULL)
    {
        min = root->left->data;
        root = root->left;
    }
    return min;
}
node* DeleteNode(node*root,int n)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(n<root->data)
    {
        root->left = DeleteNode(root->left,n);
    }
    else if(n>root->data)
    {
        root->right = DeleteNode(root->right,n);
    }
    else{
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        root->data = MinGet(root->right);
        root->right = DeleteNode(root->right,root->data);        
    }
}
int main()
{
    node* root;
    root = Create();
    Inorder(root);
    int n;
    printf("Enter data for delete in above list:\t");
    scanf("%d",&n);
    root = DeleteNode(root,n);
}