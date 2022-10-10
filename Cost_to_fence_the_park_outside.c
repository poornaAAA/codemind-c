#include<stdio.h>
int cost(int l, int b,int w,int c)
{
    int tc,d;
    d=((l+2*w)*(b+2*w)-(l*b));
    tc=d*c;
    return tc;
}
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int h=cost(l,b,w,c);
    printf("%d",h);
}