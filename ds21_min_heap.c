#include<stdio.h>
#include<stdlib.h>
int a[100],sz=0;
void insert(int x){int i=++sz; a[i]=x; while(i>1 && a[i/2]>a[i]){int t=a[i];a[i]=a[i/2];a[i/2]=t;i/=2;}}
int extract(){if(sz==0) return -1; int r=a[1]; a[1]=a[sz--]; int i=1; while(1){int l=2*i,rgi=2*i+1,small=i; if(l<=sz && a[l]<a[small]) small=l; if(rgi<=sz && a[rgi]<a[small]) small=rgi; if(small==i)break; int t=a[i];a[i]=a[small];a[small]=t; i=small;} return r;}
int main(){int n;scanf("%d",&n);for(int i=0;i<n;i++){int x;scanf("%d",&x);insert(x);}printf("%d",extract());return 0;}