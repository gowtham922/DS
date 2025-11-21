#include<stdio.h>
#include<stdlib.h>
struct N{int v;struct N*l,*r;};
struct N*newn(int x){struct N*p=malloc(sizeof(*p));p->v=x;p->l=p->r=NULL;return p;}
void pre(struct N*root){if(root){printf("%d ",root->v);pre(root->l);pre(root->r);}}
void inor(struct N*root){if(root){inor(root->l);printf("%d ",root->v);inor(root->r);}}
void post(struct N*root){if(root){post(root->l);post(root->r);printf("%d ",root->v);}}
struct N*insert(struct N*root,int x){if(!root)root=newn(x);else if(x<root->v)root->l=insert(root->l,x);else root->r=insert(root->r,x);return root;}
int main(){int n;scanf("%d",&n);struct N*root=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);root=insert(root,x);}pre(root);printf("\n");inor(root);printf("\n");post(root);return 0;}