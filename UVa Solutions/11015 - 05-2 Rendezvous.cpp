#include<bits/stdc++.h>
#define inf 100000
using namespace std;

int m,n,kase=1;
int graph[30][30];
int i,j,k,r,c;
char name[30][15];
int main()
{
    while(scanf("%d%d\n",&n,&m) && n)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%s",name[i]);
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    graph[i][j]=0;
                else
                    graph[i][j]=inf;
            }
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d%d%d",&r,&c,&k);
            graph[r][c]=graph[c][r]=k;
        }
        for(k=1;k<=n;k++)
            for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);

        int mini=inf,num=0;
        for(i=1;i<=n;i++)
        {
            int sum=0;
            for(j=1;j<=n;j++)
            {
                sum+=graph[i][j];
            }
            if(mini>sum)
            {
                mini=sum;
                num=i;
            }
        }
        printf("Case #%d : %s\n",kase++,name[num]);

    }
    return 0;
}

