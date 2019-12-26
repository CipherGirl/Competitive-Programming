#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int i,j,n,m;
    while(scanf("%d",&n)==1)
    {
        int kase=1;
        string name;
        vector<string>input;
        map<string, int>order;
        vector<int>graph[105];
        vector<int>::iterator it;
        vector<int>indeg(105,0);
        for(i=0;i<n;i++)
        {
            cin>>name;
            order[name]=i;
            input.push_back(name);
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>name;
            int u=order[name];
            cin>>name;
            int v=order[name];
            graph[u].push_back(v);
            indeg[v]++;
        }
        priority_queue<int,vector<int>,greater<int>>q;
        for(i=0;i<n;i++)
        {
            if(indeg[i]==0)
                q.push(i);
        }
        printf("Case #%d: Dilbert should drink beverages in this order:",kase++);
        while(!q.empty())
        {
            int temp=q.top();
            q.pop();
            for(it=graph[temp].begin();it!=graph[temp].end();it++)
            {
                indeg[*it]--;
                if(indeg[*it]==0)
                    q.push(*it);
            }
            cout<<" "<<input[temp];
        }
        printf(".\n");
    }
	return 0;
}
