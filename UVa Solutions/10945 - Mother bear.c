#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
    char s[1001],store_s[1001],revstore_s[1001];
    int i,j,n,k,flag;
    while(1)
    {
        j=0;k=0; flag=1;
        gets(s);
        if(strcmp(s,"DONE")==0)
            break;
        n= strlen(s);
        for(i=0;i<=n;i++)
        {
            if(s[i]>=97 && s[i]<=122)
                store_s[j++]=s[i];
            else if(s[i]>=65 && s[i]<=90)
                store_s[j++]=s[i]+32;
        }
        for(i=j-1;i>=0;i--)
            revstore_s[k++]=store_s[i];

        for(i=0;i<j;i++)
        {
            if(store_s[i]!=revstore_s[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");

    }
    return 0;
}
