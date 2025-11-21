#include<stdio.h>
#include<stdlib.h>
int n;
int g[100][100];
int vis[100];
void dfs(int u){vis[u]=1;printf("%d ",u);for(int v=1;v<=n;v++)if(g[u][v]&&!vis[v])dfs(v);}
int main(){int m;scanf("%d%d",&n,&m);for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)g[i][j]=0;for(int i=0;i<m;i++){int u,v;scanf("%d%d",&u,&v);g[u][v]=g[v][u]=1;}int s;scanf("%d",&s);dfs(s);return 0;}