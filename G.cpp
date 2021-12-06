#include <cstdio>
 
int suan(int k)
{
    if(k<=10) return k;
    else if(k<=50) return 10+2*(k-10);
    else if(k<=100) return 90+3*(k-50);
    else return 240+4*(k-100);
}
 
int main()
{
    int n,m,k,p,a,b; scanf("%d%d",&n,&m);
    k=n-m+1;
    p=m/k;
    a=m%k; b=k-m%k;
    printf("%d",a*suan(p+1)+b*suan(p));
    return 0;
}