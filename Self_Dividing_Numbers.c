#include<stdio.h>
int main()
{
    int n,m,i,r,t,s=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        int c=0,s=0;;
        t=i;
        while(t!=0)
        {
            r=t%10;
            t=t/10;
            s++;
            if(r==0)
            {
                break;
            }
            else
            {
                if(i%r==0)
                {
                    c++;
                }
            }
        }
        if(s==c)
        {
            printf("%d ",i);
        }
    }
}