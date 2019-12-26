#include<stdio.h>
#include<string.h>
int main()
{
    long long int k,sum=0;
    int x;
    char s[10];
    scanf("%d\n",&x);
    while(x--)
    {
        scanf("%s",s);
        if(strcmp(s,"donate")==0)
        {
            scanf("%lld",&k);
            sum=sum + k;
        }
        else if(strcmp(s,"report")==0)
            printf("%lld\n",sum);
    }
    return 0;
}
