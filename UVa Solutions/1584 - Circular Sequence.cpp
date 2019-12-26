#include<bits/stdc++.h>
using namespace std;

int main()
{

	int x,i,j,n,sum,t;
	string ans, check,input;
	char c;
	set<int>loc;
	set<int>::iterator it;
	scanf("%d",&x);
	getchar();
	for(t=0;t<x;t++)
    {
        int len=-1;
        char alpha='Z'+1;
        input.clear();
        ans.clear();
        while(scanf("%c",&c)==1)
        {
            if(c=='\n')
                break;
            len++;
            if(alpha>c)
            {
                alpha=c;
                loc.clear();
            }
            input+=c;
            if(alpha==c)
                loc.insert(len);

        }
        ///Testing the inputs..
//        it=loc.end();
//        it--;
//        cout<<alpha<<" "<<*(it)<<" "<<len<<endl<<input<<endl;
        it=loc.begin();
        for(i=*(it);i<=len+*(it);i++)
        {
            if(i>len)
                ans+=input[i-len-1];
            else
                ans+=input[i];
        }
        it++;
        for(;it!=loc.end();it++)
        {
            check.clear();
            for(i=*(it);i<=len+*(it);i++)
            {
                if(i>len)
                    check+=input[i-len-1];
                else
                    check+=input[i];
            }
            if(ans>check)
            {
                ans=check;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
