#include<stdio.h>
#include<string.h>
#include<ctype.h>
int i,n,s;
int split(int n)
{
    s=0;
    if(n<10)
        return n;
    while(n!=0)
    {
        s+=n%10;
        n=n/10;
    }
    return split(s);
}
int suming(int x,char c[])
{
    s=0;
    for(i=0;i<x;i++)
        {
            if(c[i]>='a' && c[i]<='z')
                s+=(c[i]-96);
            else if(c[i]>='A' && c[i]<='Z')
                s+=(c[i]-64);
            else
                s+=0;
        }
    return s;
}
int main()
{
    char name1[30],name2[30];
    int i,s1,s2,q,r;
    double ratio,dig1,dig2;
    while((gets(name1)&&gets(name2))==1)
    {
        s1=0;s2=0,dig1=0;dig2=0;


        dig1 =split(suming(strlen(name1),name1));
        dig2 =split(suming(strlen(name2),name2));
        if(dig1>dig2){
            ratio=(dig2/dig1)*100;
            printf("%.2f %%\n", ratio);
        }

        else if(dig1<=dig2){
            if(dig2==0)
            printf("\n");
            else{
            ratio=(dig1/dig2)*100;
            printf("%.2f %%\n", ratio);
            }
        }

    }

    return 0;
 }
