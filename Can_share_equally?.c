#include<stdio.h>
int can(int a,int b)
{
    int c;
    if(a!=0 && a%2==0 || a==0 && b%2==0)
    {
        c=1;
    }
    else{
        c=0;
    }
    return c;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if (can(x,y)==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}