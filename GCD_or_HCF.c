#include<stdio.h>
int main()
{
    int n,m,i,G;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n and i<=m;i++)
    {
        if(n%i==0 and m%i==0)
        {
            G=i;
        }
    }
    printf("%d",G);
}