#include <bits/stdc++.h>
#define MAX 100
using namespace std;

vector<int> adj_list[MAX];

void addEdge(int u,int v)
{
	adj_list[u].push_back(v);
}

void BFS(int s,int n)
{
    vector<bool> visited(n, false);
	vector<int>::iterator it;
	queue<int>bfs_queue;

	bfs_queue.push(s);
    visited[s]=true;

	while(!bfs_queue.empty())
	{
		s=bfs_queue.front();
		cout<<s<<" ";
		bfs_queue.pop();

		for(it = adj_list[s].begin(); it != adj_list[s].end(); ++it)
        {
            if(!visited[*it])
            {
                visited[*it] = true;
                bfs_queue.push(*it);
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
    cout<<"BFS\n";
    BFS(2,V);
    return 0;
}
