#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
    long int i,j,n,c=0;
    char s[1000000];

    while(gets(s))
    {

        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='"' && c==0){
                printf("``");
                c=1;
            }
            else if(s[i]=='"' && c==1){
                printf("''");
                c=0;
            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
