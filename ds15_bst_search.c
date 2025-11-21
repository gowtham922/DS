#include<stdio.h>
#include<stdlib.h>
struct N{int v;struct N*l,*r;};
struct N*newn(int x){struct N*p=malloc(sizeof(*p));p->v=x;p->l=p->r=NULL;return p;}
struct N*insert(struct N*root,int x){if(!root)root=newn(x);else if(x<root->v)root->l=insert(root->l,x);else root->r=insert(root->r,x);return root;}
int search(struct N*root,int x){if(!root)return 0; if(root->v==x)return 1; if(x<root->v)return search(root->l,x); return search(root->r,x);}
int main(){int n;scanf("%d",&n);struct N*root=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);root=insert(root,x);}int key;scanf("%d",&key);printf(search(root,key)? "1":"0");return 0;}