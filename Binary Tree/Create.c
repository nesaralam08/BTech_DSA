#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left,*right;
}node;

node* Create(){
    node *newnode;
    int x;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter Data [-1 For No Node]:\t");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data = x;
    printf("Enter Left Data:\n");
    newnode->left = Create();
    printf("Enter Right Data:\n");
    newnode->right = Create();
    return newnode;
}
void Inorder(node* root){
    if(root==0){
        return;
    }
    else{
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
    }
}
void PreOrder(node *root){
    if(root==0){
        return;
    }
    else{
        printf("%d ",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void PostOrder(node*root){
    if(root==0){
        return;
    }
    else{
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    node *root;
    root = Create();
    printf("\n\nIn-Order Printing:\t");
    Inorder(root);
    printf("\n\nPre-Order Printing:\t");
    PreOrder(root);
    printf("\n\nPost-Order Printing:\t");
    PostOrder(root);
}