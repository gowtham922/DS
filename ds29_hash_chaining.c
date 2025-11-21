#include<stdio.h>
#include<stdlib.h>
struct N{int v;struct N*n;};
struct N*table[100];
int H(int x){return x%100;}
void insert(int x){int h=H(x);struct N*nn=malloc(sizeof(*nn));nn->v=x;nn->n=table[h];table[h]=nn;}
int search(int x){int h=H(x);struct N*t=table[h];while(t){if(t->v==x)return 1;t=t->n;}return 0;}
int main(){int n;scanf("%d",&n);for(int i=0;i<n;i++){int x;scanf("%d",&x);insert(x);}int key;scanf("%d",&key);printf(search(key)? "1":"0");return 0;}