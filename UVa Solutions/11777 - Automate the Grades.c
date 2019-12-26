#include<stdio.h>

int main()
{
    int term1,term2,final_term,attendance,a,b,c,i,T;
    double sum;
    while (scanf("%d",&T)!=EOF)
    {
    for(i=1;i<=T;i++)
    {
        sum=0;
        scanf("%d%d%d%d%d%d%d",&term1,&term2,&final_term,&attendance,&a,&b,&c);
        if(a>=c && b>=c)
            sum = term1+term2+final_term+attendance+((float)(a+b)/2.0);
        else if(b>=a && c>=a)
            sum = term1+term2+final_term+attendance+((float)(b+c)/2.0);
        else if(a>=b && c>=b)
            sum = term1+term2+final_term+attendance+((float)(a+c)/2.0);
        if(sum>=90)
            printf("Case %d: A\n",i);
        else if(sum>=80 && sum<90)
            printf("Case %d: B\n",i);
        else if(sum>=70 && sum<80)
            printf("Case %d: C\n",i);
        else if(sum>=60 && sum<70)
            printf("Case %d: D\n",i);
        else if(sum<60)
            printf("Case %d: F\n",i);
    }
    }
    return 0;
}
