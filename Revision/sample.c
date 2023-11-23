#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left,*right;
}node;
node* CreateNode(){
    node* newnode;
    newnode = (node*)malloc(sizeof(node));
    int x;
    printf("Enter Data [-1 for exit]:");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data = x;
    printf("Enter the left child node :\n");
    newnode->left = CreateNode();
    printf("Enter the right child node :\n");
    newnode->right = CreateNode();
    return newnode;
}

// function for print inorder
void InOrder(node* root){
    if(root==0)
    {
        return;
    }
    else{
        InOrder(root->left);
        printf("%d  ",root->data);
        InOrder(root->right);
    }
}
// function for print preorder
void PreOrder(node* root){
    if(root==0)
    {
        return;
    }
    else{
        printf("%d  ",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
//function for print postorder
void PostOrder(node* root){
    if(root==0)
    {
        return;
    }
    else{
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d  ",root->data);
    }
}
int  main()
{
    node *root;
    root = CreateNode();
    InOrder(root); //left root right
    PreOrder(root); //root left right
    PostOrder(root); //left right root
    return 0;
}