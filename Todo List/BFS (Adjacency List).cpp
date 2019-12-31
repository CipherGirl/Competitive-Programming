#include<bits/stdc++.h>
#define lim 100
using namespace std;

vector<int>adj_list[lim];
vector<int>::iterator it;
vector<bool>visited(lim,0);
void addEdge( int u, int v)
{
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

void bfs(int n, int s)
{
    queue<int>bfs;
    visited[s]=true;
    bfs.push(s);

    while(!bfs.empty())
    {
        int u = bfs.front();
        cout<<u<<" ";
        bfs.pop();

        for(it=adj_list[u].begin(); it!=adj_list[u].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                bfs.push(*it);
            }
        }
    }
}


int main()
{
    int n,m;
    n=10; m=13;
    addEdge(0, 1); 
	addEdge(0, 2); 
	addEdge(0, 3);
  	addEdge(1, 5);
  addEdge(3, 6);
  addEdge(2, 6);
  addEdge(2, 7);
  addEdge(5, 9);
  addEdge(6, 7);
  addEdge(6, 8);
  addEdge(7, 4);
  addEdge(9, 8);
  addEdge(9, 4);

    bfs(n,9);
  return 0;
}