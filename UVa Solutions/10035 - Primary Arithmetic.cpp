//Uva 10035 Primary Arithmetic
#include<bits/stdc++.h>
using namespace std;

string add0(string s, int n)
{
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
        s+="0";
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    while(1){
    string a,b;
    cin>>a>>b;
    if(a=="0" && b=="0")
        break;
    if(a.size()<b.size())
        a=add0(a,b.size()-a.size());
    else
        b=add0(b,a.size()-b.size());

    int carry=0,sum=0,count=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        sum=(a[i]-'0')+(b[i]-'0')+carry;
        if(sum>9)
        {
            carry=sum/10;
            sum%=10;
            count++;
        }
        else
            carry=0;
    }
    if(count>1)
        cout<<count<<" carry operations."<<endl;
    else if(count==0)
        cout<<"No carry operation."<<endl;
    else
        cout<<"1 carry operation."<<endl;
    }
    return 0;
}
