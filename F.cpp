#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll ans=1;
        ll n1=n;
        for(ll i=2;i*i*i<=n1;i++)
        {
            if(n%i==0)
            {
                while(n%(i*i)==0) n/=i*i,ans*=i;
                if(n%i==0) n/=i;
            }
        }
        ll cc=(ll)(sqrt((double)(n))+0.5);
        if(cc*cc==n) ans*=cc;
        printf("%lld\n",ans);
    }
}