/*
ID: cipherg1
PROG: gift1
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //faster i/o
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    // input/output
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);

    map<string, int>group;
    vector<string>order;
    map<string, int>::iterator it;
    string name;
    int i,x,j,amn, num;

    cin>>x;
    getchar();

    for(i=0;i<x;i++)
    {
        cin>>name;
        getchar();
        order.push_back(name);
        group[name]=0;
    }
    for(i=0;i<x;i++)
    {
        cin>>name;
        getchar();
        cin>>amn>>num;
        getchar();
        group[name]-=amn;
        if(amn)
        group[name]+=(amn%num);

        for(j=0;j<num;j++)
        {
            cin>>name;
            if(amn)
            group[name]+=(amn/num);
        }
    }
    for(i=0;i<order.size();i++)
    {
        cout<<order[i]<<" "<<group[order[i]]<<endl;
    }
    return 0;
}
