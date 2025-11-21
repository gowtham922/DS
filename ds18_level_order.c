#include<stdio.h>
#include<stdlib.h>
struct N{int v;struct N*l,*r;};
struct N*newn(int x){struct N*p=malloc(sizeof(*p));p->v=x;p->l=p->r=NULL;return p;}
struct N*insert(struct N*root,int x){if(!root)return newn(x); if(x<root->v)root->l=insert(root->l,x); else root->r=insert(root->r,x); return root;}
int main(){int n;scanf("%d",&n);struct N*root=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);root=insert(root,x);}struct N*q[100];int f=0,r=0; if(root) q[r++]=root; while(f<r){struct N*t=q[f++];printf("%d ",t->v); if(t->l) q[r++]=t->l; if(t->r) q[r++]=t->r;}return 0;}