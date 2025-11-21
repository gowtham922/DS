#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*prev,*next;};
int main(){int n;scanf("%d",&n);struct Node*head=NULL,*tail=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->prev=tail;nn->next=NULL;if(!head)head=nn;else tail->next=nn;tail=nn;}int del;scanf("%d",&del);struct Node*t=head;while(t){if(t->v==del){if(t->prev)t->prev->next=t->next;else head=t->next;if(t->next)t->next->prev=t->prev;break;}t=t->next;}for(t=head;t;t=t->next)printf("%d ",t->v);return 0;}