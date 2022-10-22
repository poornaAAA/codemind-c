#include<stdio.h>
int main(){
    int n,r,c=0,l=1;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        c++;
    }
    if(r==0 || c<9) l=0;
    if(l==1) printf("Valid");
    else printf("Invalid");
    return 0;
}