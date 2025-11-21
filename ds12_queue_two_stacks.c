#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int s1[MAX],s2[MAX],t1=0,t2=0;
void push1(int x){s1[t1++]=x;}
int pop1(){return s1[--t1];}
void enq(int x){push1(x);}
void deq(){if(t2==0){while(t1) s2[t2++]=pop1();} if(t2==0)printf("Empty");else printf("%d",s2[--t2]);}
int main(){int t;scanf("%d",&t);if(t==1){int x;scanf("%d",&x);enq(x);}else deq();return 0;}