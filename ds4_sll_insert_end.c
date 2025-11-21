#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*n;};
int main(){int x;scanf("%d",&x);struct Node*head=NULL,*tail=NULL;while(x!=-1){struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->n=NULL;if(!head)head=tail=nn;else{tail->n=nn;tail=nn;}scanf("%d",&x);}struct Node*t=head;while(t){printf("%d ",t->v);t=t->n;}return 0;}