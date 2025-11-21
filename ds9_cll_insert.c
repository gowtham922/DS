#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*n;};
int main(){int x;scanf("%d",&x);struct Node*head=NULL,*tail=NULL;while(x!=-1){struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->n=NULL;if(!head)head=tail=nn;else tail->n=nn,tail=nn;scanf("%d",&x);}if(tail)tail->n=head;struct Node*t=head;int cnt=0;if(t){do{printf("%d ",t->v);t=t->n;cnt++;}while(t!=head && cnt<100);}return 0;}