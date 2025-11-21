#include<stdio.h>
#include<stdlib.h>
struct Node{int v;struct Node*n;};
int main(){int n;scanf("%d",&n);struct Node*head=NULL,*tail=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);struct Node*nn=malloc(sizeof(*nn));nn->v=x;nn->n=NULL;if(!head)head=tail=nn;else tail->n=nn,tail=nn;}int key;scanf("%d",&key);struct Node*t=head;int pos=1,found=0;while(t){if(t->v==key){found=1;break;}t=t->n;pos++;}if(found)printf("%d",pos);else printf("-1");return 0;}