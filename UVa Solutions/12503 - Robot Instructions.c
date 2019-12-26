#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    char ins[101],text[6],as[3];
    int i,j,T,t,p,n,k,c;
    scanf("%d\n",&T);
    while(T--)
    {
        p=0;j=1,c=1;
        scanf("%d\n",&t);
        while(t--)
        {
            scanf("%s",text);
            if(strcmp(text,"LEFT")==0)
            {
                ins[j++]='L';
                p--;
            }
            else if(strcmp(text,"RIGHT")==0)
            {
                ins[j++]='R';
                p++;
            }
            else
            {
                scanf("%s",as);
                scanf("%d",&k);
                if(ins[k]=='R')
                {
                    p++;
                    ins[j++]='R';

                }
                else if(ins[k]=='L')
                {
                    p--;
                    ins[j++]='L';
                }
            }
        }
            printf("%d\n",p);
    }
    return 0;
}


