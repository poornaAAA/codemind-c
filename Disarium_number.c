#include<stdio.h>
#include<math.h>
int len(int n)
{
    int length=0;
    while(n!=0)
    {
        length=length+1;
        n=n/10;
    }
    return length;
}
int main()
{
    int n,sum=0,r,t;
    scanf("%d",&n);
    int l=len(n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,l);
        n=n/10;
        l--;
        
    }
    if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}