#include<stdio.h>
int main(void)
{
    long long s,m=1e9,t;
    scanf("%lld",&s);
    t=s/m+1-(s%m==0);
    printf("0 0 %lld %lld 1 %lld",m,m*t-s,t);
 } 