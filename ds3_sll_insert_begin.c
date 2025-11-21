#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*n;};
int main(){int x;scanf("%d",&x);struct Node*head=NULL;while(x!=-1){struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->n=head;head=nn;scanf("%d",&x);}struct Node*t=head;while(t){printf("%d ",t->v);t=t->n;}return 0;}