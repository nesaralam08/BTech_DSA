#include<stdio.h>
#define N 5
int S1[N],S2[N];
int top1=-1,top2=-1;
int cnt=0,i;
void enqueue(int x){
    push1(x);
    cnt++;
}
void push1(int data){
    // if(top1==N-1){
    //     printf("Stack is full");
    // }
        top1++;
        S1[top1] = data;
}
void push2(int data){
        top2++;
        S2[top2] = data;
}
void dequeue(){
    if(top1==-1 && top2==-1){
        printf("Stack is empty");
    }
    else
    {
        for(i=0;i<cnt;i++){
            int a = pop1();
            push2(a);
        }
        int c = pop2();
        printf("The dequeue element is :%d",c);
        cnt--;
        for(i=0;i<cnt;i++){
            int b = pop2();
            push1(b);
        }
    }
}
int pop1(){
    int a = S1[top1];
    top1--;
    return a;
}
int pop2(){
    int a = S2[top2];
    top2--;
    return a;
}
void display(){
    for(i=0;i<top1;i++){
        printf("%d ",S1[i]);
    }
    printf("%d ",S1[i]);
}

int main(){
    while(1){
        int ch;
        printf("\n\nclick 1 for enqueue\n");
        printf("click 2 for dequeue\n");
        printf("click 3 for display\n");
        printf("click 0 for exit");
        printf("\n\nEnter Your Choice =>\t");
        scanf("%d",&ch);
        if(ch==0){
            break;
        }
        switch(ch){
            case 1:
                {
                    int m;
                    printf("Enter Data:\t");
                    scanf("%d",&m);
                    enqueue(m);
                }
                break;
            case 2:
                dequeue();break;
            case 3:
                display();break;
            default:
                printf("Invalid Choice !!");        
        }
    }
    display();
}