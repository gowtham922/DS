#include<stdio.h>
#define MAX 100
int q[100],front=0,rear=0;
void enq(int x){if(rear==MAX)printf("Full");else q[rear++]=x;}
void deq(){if(front==rear)printf("Empty");else printf("%d",q[front++]);}
int main(){int n;scanf("%d",&n);if(n==1){int x;scanf("%d",&x);enq(x);}else deq();return 0;}