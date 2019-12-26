#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int n,i,j;
    vector<string>namesv;
    queue<string>namesq;
    string name;
    char message[17][20]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to", "Rujia","Happy","birthday","to","you"};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        cin>>name;
        namesq.push(name);
    }
    for(j=0;j<ceil(n/16.0);j++)
    {
        for(i=0;i<16;i++)
        {
            name=namesq.front();
            namesq.pop();
            namesq.push(name);
            cout<<name<<": "<<message[i]<<endl;
        }
    }
	return 0;
}
