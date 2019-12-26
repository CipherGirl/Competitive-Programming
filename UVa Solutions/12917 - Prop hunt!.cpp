#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int prop,hunt,ans,object;
    while(scanf("%d%d%d",&prop,&hunt,&object)==3)
    {
        ans=(object-prop);
        if(ans<hunt)
        {
            printf("Hunters win!\n");
        }
        else
        {
            printf("Props win!\n");
        }
    }
	return 0;
}
