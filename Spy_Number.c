#include<stdio.h>
int spy(int n)
{
    int c,r,sum=0,p=1;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    if(sum==p)
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
    if(spy(n)==1)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}