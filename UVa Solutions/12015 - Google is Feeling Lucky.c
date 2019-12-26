#include<stdio.h>
#include<string.h>
#include<math.h>
struct url_visit
{
    char urls[101];
    int visits;
};
int main()
{
    struct url_visit u_v[10];
    int max=0,i,j,T;
    scanf("%d\n",&T);
    for(j=0;j<T;j++)
    {
        max=0;
        for(i=0;i<10;i++)
        {
            scanf("%s%d",u_v[i].urls,&u_v[i].visits);
            if(u_v[i].visits>max)
                max=u_v[i].visits;
        }
        printf("Case #%d:\n",j+1);
        for(i=0;i<10;i++)
        {
            if(u_v[i].visits==max)
            {
                printf("%s\n",u_v[i].urls);
            }
            //printf("%s %d\n",u_v[i].urls,u_v[i].visits);
        }
    }
    return 0;
}
