#include <bits/stdc++.h>
#define MAX 100
using namespace std;

vector<int> adj_list[MAX];

void addEdge(int u,int v)
{
    adj_list[u].push_back(v);
}

void DFS(int n,int s)
{
    vector<bool> printed(n,false);
    vector<bool> visited(n, false);
    vector<int> edge_id(n, 0);

    stack<int> dfs_stack;
    dfs_stack.push(s);

    while(!dfs_stack.empty())
    {
        s=dfs_stack.top();
        if(!printed[s])
            cout<<s<<" ";printed[s]=true;
        dfs_stack.pop();

        while(edge_id[s]<adj_list[s].size())
        {
            int v=adj_list[s][edge_id[s]];
            edge_id[s]++;
            if (!visited[v])
            {
                visited[v]=true;
                //cout<<s<<" ";
                dfs_stack.push(s);
                dfs_stack.push(v);
                break;
            }
        }
    }
}
int main()
{
    int V = 4;
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(3, 3);
    cout<<"DFS\n";
    DFS(V,2);
    return 0;
}
