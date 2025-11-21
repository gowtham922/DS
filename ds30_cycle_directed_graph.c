#include<stdio.h>
#include<stdlib.h>
int n;
int g[100][100];
int vis[100],rec[100];
int dfs(int u){vis[u]=1;rec[u]=1;for(int v=1;v<=n;v++)if(g[u][v]){if(!vis[v]&&dfs(v))return 1; else if(rec[v])return 1;}rec[u]=0;return 0;}
int main(){int m;scanf("%d%d",&n,&m);for(int i=0;i<m;i++){int u,v;scanf("%d%d",&u,&v);g[u][v]=1;}printf(dfs(1)?"1":"0");return 0;}