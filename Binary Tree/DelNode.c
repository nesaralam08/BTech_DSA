#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left,*right;
}node;

node* Create()
{
    int n;
    struct node* newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter Data[-1 for exit]:\n");
    scanf("%d",&n);
    if(n==-1)
    {
        return 0;
    }
    newnode->data = n;
    printf("Enter left Node:\n");
    newnode->left = Create();
    printf("Enter Right Node:\n");
    newnode->right = Create();

    return newnode;
}
void Inorder(node* root){
    if(root==NULL)
    {
        return;
    }
    else{
        Inorder(root->left);
        printf("%d\t",root->data);
        Inorder(root->right);
    }
}
int MinValue(node*root)
{
    int minv = root->data;
    while(root->left!=NULL)
    {
        minv = root->left->data;
        root = root->left;
    }
    return minv;
}
node* DeleteNode(node*root,int key){
    if(root==NULL)
    {
        return 0;
    }
    if(key<root->data)
    {
        root->left = DeleteNode(root->left,key);
    }
    else if(key>root->data)
    {
        root->right = DeleteNode(root->right,key);
    }
    else{
        if(root->left ==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        root->data = MinValue(root->right);
        root->right = DeleteNode(root->right,root->data);    
    }
    return root;
}
int main()
{
    node* root;
    root = Create();
    Inorder(root);
    int key;
    printf("Enter Key For Delete:\t");
    scanf("%d",&key);
    root = DeleteNode(root,key);
    printf("\n\n");
    Inorder(root);
}