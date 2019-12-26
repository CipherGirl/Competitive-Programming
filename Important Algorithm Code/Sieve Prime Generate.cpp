
#include<bits/stdc++.h>
#include<iostream>
#define LIM 200000005
using namespace std;
long long int i,j,a,odd;
bool isprime[LIM]={0};
vector<long long>prime_list;
//long long int prime_list[99999999];
void sieve()
{
    long long int l=sqrt(LIM);
 	//prime_list[a++]=2;
 	prime_list.push_back(2);
    for(i=3;i<=(LIM);i+=2)
    {
        isprime[i+1]=true;
        if(!isprime[i])
        {
            prime_list.push_back(i);
            if(i<=(l))
            {
            	//odd=i;
                for(j=(i*i);j<LIM;j+=(i+i))
                {
                    isprime[j]=true;
                    //odd+=2;
                }
            }
        }
        //limit for how many primes needed..
    }
}
int main()
{

//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("primes.txt","w",stdout);
    long long int n,t,T;
    sieve();
    for(t=0;t<prime_list.size();t++)
    {
        cout << prime_list[t] << ", ";
    }
    return 0;
}
