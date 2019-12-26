#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,top,i,j,n;
    stack<int>train;

    while(scanf("%d",&x)==1 && x)
    {
        for(;;)
        {
            //clear the stack and element index
            while(!train.empty()) train.pop();
            int element_index=1,poptop=0;

            scanf("%d",&n);
            //block is 0 then newline and break
            if(!n){ printf("\n"); break;}

            while(element_index<n)
                train.push(element_index++);
            element_index++;
            for(i=1;i<x;i++)
            {
                scanf("%d",&n);
                if(train.empty())
                {
                    while(element_index<n)
                        train.push(element_index++);
                    element_index++;
                }
                else
                {
                    if(train.top()==n)
                    train.pop();
                    else if(train.top()<n)
                    {
                        while(element_index<n)
                            train.push(element_index++);
                        element_index++;
                    }
                    else
                    {
                        printf("No\n");
                        element_index=0;
                        break;
                    }
                }
            }
            if(i<x)
            {
                while(getchar()!='\n')
                continue;
            }
            else if(train.empty())
                printf("Yes\n");
            else
                printf("No\n");

        }
    }
    return 0;
}
