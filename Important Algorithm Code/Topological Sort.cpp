#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int V;
vector <int> adj_list[MAX];
vector <int> top_order;
void addEdge(int u,int v)
{
	adj_list[u].push_back(v);
}

void TopSort(int n)
{
    vector <int> in_degree(n, 0);
    vector <int> :: iterator it;    

    for(int i=0; i<n; i++)
    {
        for(it = adj_list[i].begin(); it != adj_list[i].end(); it++)
        {
            in_degree[*it]++;
        }
    }
    queue <int> q;
    int cnt=0;
    //Counting InDegree..
    for(int i=0; i<n; i++)
    {
        if(in_degree[i] == 0)
            q.push(i);
    }
    //A KAHNS Algo to POP and PUSH the vertices according to InDegrees Using QUEUE same as BFS.. 
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        top_order.push_back(u);

        vector <int> :: iterator it;
        for(it = adj_list[u].begin(); it != adj_list[u].end(); it++)
        {
            if(--in_degree[*it] == 0)
                q.push(*it);
        }
             cnt++;
    }
    //Check for Cycle..
    if (cnt != V)
    {
        cout << "There exists a cycle in the graph\n";
        return;
    }
    //Printing the order..
    printf("%d", top_order[0]);
    for(int i=1; i<top_order.size(); i++)
    {
        printf(" %d",top_order[i]);
    }
    printf("\n");
}
int main()
{
    V = 4;
    addEdge(3, 1);
    addEdge(2, 0);
    addEdge(1, 2);
    addEdge(3, 2);

    TopSort(V);
    return 0;
}