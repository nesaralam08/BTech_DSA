#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*left,*right;
}Node;

Node* Create(int x)
{
    Node*temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}
Node* InsertNode(Node*root,int x)
{
    if(root==NULL)
    {
        return Create(x);
    }
    if(x<root->data)
    {
        root->left = InsertNode(root->left,x);
    }
    else if(x>root->data)
    {
        root->right = InsertNode(root->right,x);
    }
    return root;
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
    int i,n;
    printf("Enter No. of Nodes You Want To Create :\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x;
        printf("Enter Data:\t");
        scanf("%d",&x);
        root = InsertNode(root,x);
    }

    // uncomment for print preorder || postorder
    Inorder(root);
    // Preorder(root);
    // Postorder(root);
}