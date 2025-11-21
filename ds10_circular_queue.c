#include<stdio.h>
#define MAX 100
int q[MAX],front=-1,rear=-1;
void enq(int x){if((rear+1)%MAX==front)printf("Full");else{if(front==-1)front=0;rear=(rear+1)%MAX;q[rear]=x;}}
void deq(){if(front==-1)printf("Empty");else{printf("%d",q[front]);if(front==rear)front=rear=-1;else front=(front+1)%MAX;}}
int main(){int t;scanf("%d",&t);if(t==1){int x;scanf("%d",&x);enq(x);}else deq();return 0;}