#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int coun=0;
vector<bool> visited(MAX, false);
vector<int> adj_list[MAX];

void addEdge(int u, int v)
{
    adj_list[u].push_back(v);
}

void DFS(int s)
{
    coun++;
    if(visited[s])
       return;
    visited[s] = true;
    cout << s << " ";
    for (int i=0; i<adj_list[s].size(); i++)
            DFS(adj_list[s][i]);
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
    // addEdge(0,1);
    // addEdge(0,2);
    // addEdge(0,3);
    // addEdge(0,4);
    cout<<"DFS\n";
    visited.clear();
    DFS(2);
    printf("\n\n%d",coun);
    return 0;

}
