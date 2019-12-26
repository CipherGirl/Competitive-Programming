#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;

    while(scanf("%d",&n)==1)
    {
        string a,b,c,d,ans;
        bitset<32>binary=n;
        string bin=binary.to_string();
        for(int i=0;i<32;i++)
        {
            if(i>=0 && i<8)
                a+=bin[i];
            else if(i>=8 && i<16)
                b+=bin[i];
            else if(i>=16 && i<24)
                c+=bin[i];
            else
                d+=bin[i];
        }
        ans=d+c+b+a;
        int number=bitset<32>(ans).to_ulong();
        cout<<n<<" converts to "<<number<<endl;
    }

    return 0;
}
