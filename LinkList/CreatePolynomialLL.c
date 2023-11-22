#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int coeff;
    int expo;
    struct node *next;
}node;
node *head=0,*newnode,*temp;

//function for create polynomial
node *CreatePoly()
{
    node *head=0;
    int n,i;
    printf("Enter the number of terms:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (node*)malloc(sizeof(node));
        printf("Enter Coefficient of %d\t",(i+1));
        scanf("%d",&newnode->coeff);
        printf("Enter Exponent of %d\t",(i+1));
        scanf("%d",&newnode->expo);
        newnode->next = 0;
        if(head == 0)
        {
            head  = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

//print result
void print(node *head1)
{
    temp = head1;
    while(temp!=0)
    {
        int i=1;
        printf("%d  %d\n",temp->coeff,temp->expo);
        temp = temp->next;
        i++;
    }
}

//function for addition
node *addition(node *head1,node *head2)
{
    node *temp1,*temp2,*ans=0,*t;
    temp1 = head1;
    temp2 = head2;
    while(temp1->next!=0 && temp2->next!=0)
    {
        newnode = (node*)malloc(sizeof(node));
        newnode->next = 0;
        if(ans==0)
        {
            ans = t = newnode;
        }
        else if(temp1->expo > temp2->expo)
        {
            newnode->coeff = temp1->coeff;
            newnode->expo = temp1->expo;
            temp1 = temp1->next;
            t->next = newnode;
            t =newnode;
        }
        else if(temp1->expo < temp2->expo)
        {
            newnode->coeff = temp2->coeff;
            newnode->expo = temp2->expo;
            temp2 = temp2->next;
            t->next = newnode;
            t =newnode;
        }
        else if(temp1->expo == temp2->expo)
        {
            newnode->coeff = (temp1->coeff+temp2->coeff);
            newnode->expo = temp1->expo;
            temp1 = temp1->next;
            temp2 = temp2->next;
            t->next = newnode;
            t =newnode;
        }
        else if(temp2->next!=0)
        {
            newnode->coeff = temp2->coeff;
            newnode->expo = temp2->expo;
            temp2 = temp->next;
            t->next = newnode;
            t =newnode;
        }
        else if(temp1->next!=0)
        {
            newnode->coeff = temp1->coeff;
            newnode->expo = temp1->expo;
            temp1 = temp->next;
            t->next = newnode;
            t =newnode;
        }
    }
    return ans;
}
int main()
{
    node *head1=0,*head2=0,*result;
    head1 = CreatePoly();
    head2 = CreatePoly();
    result = addition(head1,head2);
    print(result);
}