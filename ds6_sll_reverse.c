#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*n;};
int main(){int x;scanf("%d",&x);struct Node*head=NULL;while(x!=-1){struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->n=head;head=nn;scanf("%d",&x);}struct Node *p=NULL,*c=head,*n=NULL;while(c){n=c->n;c->n=p;p=c;c=n;}for(c=p;c;c=c->n)printf("%d ",c->v);return 0;}