#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*n;};
int main(){int n;scanf("%d",&n);struct Node*head=NULL,*tail=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->n=NULL;if(!head)head=tail=nn;else{tail->n=nn;tail=nn;}}int val;scanf("%d",&val);struct Node *cur=head,*prev=NULL;while(cur){if(cur->v==val){if(prev)prev->n=cur->n;else head=cur->n;break;}prev=cur;cur=cur->n;}for(cur=head;cur;cur=cur->n)printf("%d ",cur->v);return 0;}