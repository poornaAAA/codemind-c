#include<stdio.h>
#include<math.h>
float area(int a,int b,int c)
{
    float n,s;
    s=(a+b+c)*0.5;
    n=sqrt(s*(s-a)*(s-b)*(s-c));
    return n;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float k=area(a,b,c);
    printf("%.2f",k);
}