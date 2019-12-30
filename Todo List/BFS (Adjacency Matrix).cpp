#include<bits/stdc++.h>
#define lim 100
using namespace std;

bool g[lim][lim];
bool visited[lim];

void bfs(int n, int src)
{
    queue<int>bfs;
    bfs.push(src);
    visited[src]=1;
    while(!bfs.empty())
    {
        int u=bfs.front();
        cout<<u<<" ";
        bfs.pop();

        for(int i=0; i<n; i++)
        {
            if(g[u][i] && !visited[i])
            {
                bfs.push(i);
                visited[i]=true;
            }
        }
    }

}

int main()
{
    int i,m,n,u,v;

    cout<<"Number of vertices and edges: "<<endl;
    cin>>n>>m;
    cout<<"Input Vertices U, V:"<<endl;
    for(i=0;i<m;i++)
    {

        cin>>u>>v;

        //For undirected graph...
        g[u][v]=1;
        g[v][u]=1;
    }

    cout<<"Source: "<<endl;
    int s;
    cin>>s;
    bfs(n,s);
}
