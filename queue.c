// Online C compiler to run C program online
#include <stdio.h>
int q[20]={0};
int front=-1,rear=-1;
void eq(int v){
    if(rear<20){
        q[++rear]=v;
    }
    else printf("queue is full");
}

void dq(){
    if(front<rear){
        front++;
    }
    else printf(" queue is empty ");
}

int main() {
    int count=0;
    while(count!=1){
    int c;
    printf("choice");
    scanf("%d",&c);
    if(c==1){
        printf("enter the no ");
        int number;
        scanf("%d",&number);
        eq(number);
    }
    if(c==2){
        dq();
    }
    if(c==3){
        count=1;
    }
    
    if(front==rear) printf(" no element to display empty queue");
    for(int i=front+1;i<=rear;i++){
        printf("%d ",q[i]);
    }
    
    
    
    }
    
    
    // Write C code here
    printf("Try programiz.pro");

    return 0;
}