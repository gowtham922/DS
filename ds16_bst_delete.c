#include<stdio.h>
#include<stdlib.h>
struct N{int v;struct N*l,*r;};
struct N*newn(int x){struct N*p=malloc(sizeof(*p));p->v=x;p->l=p->r=NULL;return p;}
struct N*minv(struct N*node){while(node&&node->l)node=node->l;return node;}
struct N*del(struct N*root,int key){if(!root)return root; if(key<root->v)root->l=del(root->l,key); else if(key>root->v)root->r=del(root->r,key); else{ if(!root->l){struct N*t=root->r;free(root);return t;} else if(!root->r){struct N*t=root->l;free(root);return t;} struct N*t=minv(root->r);root->v=t->v;root->r=del(root->r,t->v);} return root;}
struct N*insert(struct N*root,int x){if(!root)root=newn(x);else if(x<root->v)root->l=insert(root->l,x);else root->r=insert(root->r,x);return root;}
void inorder(struct N*root){if(root){inorder(root->l);printf("%d ",root->v);inorder(root->r);}}
int main(){int n;scanf("%d",&n);struct N*root=NULL;for(int i=0;i<n;i++){int x;scanf("%d",&x);root=insert(root,x);}int key;scanf("%d",&key);root=del(root,key);inorder(root);return 0;}