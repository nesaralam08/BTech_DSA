#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*left,*right;
}Node;

Node* Create()
{
    int x;
    Node* newnode;
    newnode = (Node*)malloc(sizeof(Node));
    printf("\nEnter Data [-1 for exit]:\t");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data = x;
    printf("\nEnter Left Data:\t");
    newnode->left = Create();
    printf("\nEnter Right Data:\t");
    newnode->right = Create();

    return newnode;
}

void Inorder(Node*root)
{
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
void Preorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    else{
        printf("%d\t",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Postorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    else{
        Postorder(root->left);
        Postorder(root->right);
        printf("%d\t",root->data);
    }
}
int main()
{
    Node*root= NULL;
    root = Create();
    Inorder(root);
    Preorder(root);
    Postorder(root);
}