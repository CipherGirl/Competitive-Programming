#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    int sum[105]={0},i,j;
    while(getline(cin,input))
    {
        if(input=="0") break;
        for(i=0,j=input.size()-1;i<input.size();i++,j--)
            sum[i]+=(input[j]-'0');
    }
    for(i=0;i<105;i++)
    {
        if(sum[i]>9)
        {
            sum[i+1]+=(sum[i]/10);
            sum[i]=(sum[i]%10);
        }
    }
    i=104;
    while(sum[i]==0 && i>0)
        i--;
    for(;i>=0;i--)
        cout<<sum[i];
    cout<<endl;
    return 0;
}
