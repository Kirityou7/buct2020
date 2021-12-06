#include<bits/stdc++.h>
using namespace std;
char ps[2333333];
int main()
{
    int x,y; scanf("%d%d",&x,&y);
    scanf("%s",ps);
    if(x==0&&y==0)
    {
        printf("0\n"); return 0;
    }
    int l=strlen(ps),sum=x+y+l;
    for(int i=0; i<l; i++)
    {
        if(ps[i]=='L') x--;
        else if(ps[i]=='R') x++;
        else if(ps[i]=='U') y++;
        else y--;
        if(abs(x)+abs(y)<=i+1) sum=min(sum,i+1);
    }
    sum=min(sum,abs(x)+abs(y));
    printf("%d",sum);
    return 0;
}