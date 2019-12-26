#include <string.h>
#include <stdio.h>
int n,i;
int reverse(int n)
{
    int r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=r+rev*10;
        n/=10;
    }
    return rev;
}
int isprime(int n)
{
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
   int N,revN;
   while(scanf("%d",&N)==1)
   {
       if(isprime(N))
       {
           revN=reverse(N);
            if(revN==N)
            printf("%d is prime.\n",N);
            else if(isprime(revN))
            printf("%d is emirp.\n",N);
            else
            printf("%d is prime.\n",N);
       }
       else
        printf("%d is not prime.\n",N);
   }
   return(0);
}
