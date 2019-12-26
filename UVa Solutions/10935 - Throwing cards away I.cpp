#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int i,j,n,m;
    while(scanf("%d",&n) && n)
    {
        queue<int>cards;
        vector<int>answer;
        bool toogle=true;
        for(i=1;i<=n;i++)
            cards.push(i);
        while(!cards.empty())
        {
            if(toogle)
            {
                answer.push_back(cards.front());
                cards.pop();
            }
            if(cards.empty())
                break;
            if(!toogle)
            {
                m=cards.front();
                cards.pop();
                cards.push(m);
            }
            toogle=!toogle;
        }
        printf("Discarded cards:");
        if(n>1)
        {
            for(i=0;i<n-2;i++)
            cout<<" "<<answer[i]<<",";
            cout<<" "<<answer[i++];
        }
        puts("");
        printf("Remaining card:");
            cout<<" "<<answer[answer.size()-1]<<endl;
    }
	return 0;
}
