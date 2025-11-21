#include<stdio.h>
#define MAX 100
int stack[MAX],top=-1;
void push(int x){if(top==MAX-1)printf("Overflow");else stack[++top]=x;}
void pop(){if(top==-1)printf("Underflow");else printf("%d",stack[top--]);}
int main(){int n;scanf("%d",&n);if(n==1){int x;scanf("%d",&x);push(x);}else pop();return 0;}