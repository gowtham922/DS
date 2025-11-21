#include<stdio.h>
#include<stdlib.h>
struct N{int v;struct N*n;};
struct N*top=NULL;
void push(int x){struct N*nn=malloc(sizeof(*nn));nn->v=x;nn->n=top;top=nn;}
void pop(){if(!top)printf("Underflow");else{printf("%d",top->v);top=top->n;}}
int main(){int t;scanf("%d",&t);if(t==1){int x;scanf("%d",&x);push(x);}else pop();return 0;}