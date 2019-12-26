// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n+1][W+1];

    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (wt[i-1] <= w)
                    K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
            else
                    K[i][w] = K[i-1][w];
        }
    }

    return K[n][W];
}

int main()
{
	int n,m,t,i;
	scanf("%d",&t);
	while(t--)
    {
        int hpoint[1001],cost[1001];
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&cost[i],&hpoint[i]);
        }
        printf("%d\n",knapSack(m,cost,hpoint,n));
    }
	return 0;
}
