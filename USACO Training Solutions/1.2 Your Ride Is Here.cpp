/*
ID: cipherg1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    char line1[7],line2[7];
    scanf("%s\n%s",line1,line2);

    long int coun1=1,coun2=1;

    for(int i=0;line1[i];i++)
    {
        coun1*=(line1[i]-'A'+1);
    }
    for(int i=0;line2[i];i++)
    {
        coun2*=(line2[i]-'A'+1);
    }
    coun1=coun1%47;
    coun2=coun2%47;
    if(coun1==coun2)
        printf("GO\n");
    else
        printf("STAY\n");
    return 0;
}
