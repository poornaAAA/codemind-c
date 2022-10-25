#include<stdio.h>
int main()
{
    int n,a,b,c,hcf=0,i;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            if (hcf<i)
            {
                hcf=i;
            }
        }
    }printf("%d",hcf);
}