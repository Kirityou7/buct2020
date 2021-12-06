#include <cstdio>
#include <algorithm>
using namespace std;
 
double pi[23],pp[233],pd[23333][23];
 
int main()
{
    int n,p; scanf("%d%d",&n,&p);
    for(int i=1; i<=4; i++) scanf("%lf",&pi[i]);
    for(int i=1; i<=10; i++) pp[i]=i*pi[1];
    for(int i=11; i<=50; i++) pp[i]=pp[10]+(i-10)*pi[2];
    for(int i=51; i<=100; i++) pp[i]=pp[50]+(i-50)*pi[3];
    for(int i=100; i<=200; i++) pp[i]=pp[100]+(i-100)*pi[4];
    for(int i=0; i<=n; i++) for(int j=0; j<=p; j++) pd[i][j]=-200000000;
    pd[0][0]=0.0;
    for(int i=1; i<=min(n-p+1,201); i++) pd[i][0]=pp[i-1];
    for(int i=1; i<=n+1; i++) for(int j=1; j<=min(i,201); j++)
    {
        for(int k=1; k<=p; k++) pd[i][k]=max(pd[i][k],pd[i-j][k-1]+pp[j-1]);
        pd[i][p]=max(pd[i][p],pd[i-j][p]+pp[j-1]);
    }
    double sum=0.0;
    for(int i=0; i<=n+1; i++) sum=max(sum,pd[i][p]);
    printf("%.2lf\n",sum);
    return 0;
}
