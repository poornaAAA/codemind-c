#include<stdio.h>
int neo(int n)
{
    int c,s,r,sum=0;
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==n)
    {
        c=1;
    }
    else
    {
        c=0;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(neo(n)==1)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}