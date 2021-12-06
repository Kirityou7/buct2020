#include<stdio.h>
typedef long long ll;
char s[1000006];
ll a[26]={0},ans=1;
int main()
{
    scanf("%lld%s",&n,s);
    for(ll i=0;i<n;i++) a[s[i]-'a']++;
    for(ll i=0;i<26;i++) ans=ans*(a[i]+1)%(1000000007);
    printf("%lld",ans-1);
}