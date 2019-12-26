
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int m,n;
char grid[1001][1001];
bool flag[1001][1001];
int i,j,cnt,k,l;

void floodfill(int i, int j)
{
    if(i<0 || j<0 || i==m || j==n)
        return;
    if(grid[i][j]!='@')
        return;
    if(grid[i][j]=='@')
        grid[i][j]='*';

    floodfill(i+1,j);
    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j+1);
    floodfill(i+1,j-1);
    floodfill(i-1,j+1);
    floodfill(i-1,j-1);
}
int main()
{

    while(scanf("%d%d\n",&m,&n) && m)
    {
        cnt=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&grid[i][j]);

            }getchar();
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]=='@')
                {
                    cnt++;
                    floodfill(i,j);
                }
            }
        }
        printf("%d\n",cnt);

    }
    return 0;
}
