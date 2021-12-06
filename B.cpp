#include<stdio.h>
int main() {
	int n,ans=1;
    scanf("%d",&n);
    for (int i=1;i<=n;++i) ans=ans*2%10009;
    printf("%d",n*ans%10009);
}