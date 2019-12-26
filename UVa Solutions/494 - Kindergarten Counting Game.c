#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10000];
    int c,i;
    while(gets(s))
    {
        c=0;
        for(i=1;i<=strlen(s);i++)
        {
            if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z'))
            {
                if((s[i-1]>='a' && s[i-1]<='z') || (s[i-1]>='A' && s[i-1]<='Z'))
                    c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
