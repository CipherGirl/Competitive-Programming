#include<stdio.h>
#include<math.h>
int main()
{
    int x,N;
    scanf("%d",&x);
    while(x--)
    {
         scanf("%d",&N);
         N = (((N*567/9) + 7492) * 235/47)- 498;
         N = N/10;
         if(N<0)
         printf("%d\n",-(N%10));
         else
         printf("%d\n",(N%10));
    }
    return 0;
}
