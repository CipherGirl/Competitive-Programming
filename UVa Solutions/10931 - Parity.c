#include<stdio.h>
#include<math.h>

int main()
{
    long long int bin[100000],r,i,j,n,parity;
    while(scanf("%d",&n)==1)
    {
        parity = 0; i= 0;
        if(n==0) break;
        else{
        while(n!=0)
        {
            r = n%2;
            if (r==1) parity++;
            n /=2;
            bin[i++] = r;
        }
        printf("The parity of ");
        while(i--)
        {
            printf("%d",bin[i]);
        }
        printf(" is %d (mod 2).\n",parity);
        }
    }
    return 0;
}

