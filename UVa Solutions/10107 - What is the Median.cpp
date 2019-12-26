#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

int main()
{
    using namespace std;
    int x[10000],n,k=0;
    while(scanf("%d",&n)!=EOF)
    {
        x[k++]=n;
        sort(x,x+k);
        if(k%2==0)
        {
            printf("%d\n", (((x[k/2])+(x[(k/2)-1]))/2));
        }
        else
        {
            printf("%d\n", (x[(k/2)]));
        }
    }
    return 0;
 }
