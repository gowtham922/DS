#include<stdio.h>
void swap(int*a,int*b){int t=*a;*a=*b;*b=t;}
int part(int a[],int l,int h){int p=a[h],i=l-1;for(int j=l;j<h;j++)if(a[j]<=p)swap(&a[++i],&a[j]);swap(&a[i+1],&a[h]);return i+1;}
void qs(int a[],int l,int h){if(l<h){int p=part(a,l,h);qs(a,l,p-1);qs(a,p+1,h);} }
int main(){int n;scanf("%d",&n);int a[100];for(int i=0;i<n;i++)scanf("%d",&a[i]);qs(a,0,n-1);for(int i=0;i<n;i++)printf("%d ",a[i]);return 0;}