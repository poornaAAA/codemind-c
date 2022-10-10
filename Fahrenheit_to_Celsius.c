#include<stdio.h>
float heat(int a)
{
    float b;
    b=5*(a-32)/9.0;
    return b;
}
int main()
{
    int a;
    scanf("%d",&a);
    float x=heat(a);
    printf("%.2f",x);
}