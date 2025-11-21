#include<stdio.h>
#define MAX 100
int q1[MAX],q2[MAX],f1=0,r1=0,f2=0,r2=0;
void enq1(int x){q1[r1++]=x;}
int deq1(){return q1[f1++];}
void push(int x){enq1(x);for(int i=0;i<r1-f1-1;i++)q2[r2++]=deq1();while(f2<r2)q1[r1++]=q2[f2++];f1=0;r2=0;f2=0;}
void pop(){if(f1==r1)printf("Underflow");else printf("%d",deq1());}
int main(){int t;scanf("%d",&t);if(t==1){int x;scanf("%d",&x);push(x);}else pop();return 0;}