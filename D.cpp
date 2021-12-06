#include <cstdio>
 
int pi[23][2]={0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1};
char ps[23][23];
 
bool shi(int x,int y)
{
    bool flag=false;
    for(int i=0; i<8; i++)
    {
        int a=x,b=y; flag=true;
        for(int j=1; j<=4; j++)
        {
            a+=pi[i][0];
            b+=pi[i][1];
            if(a<1||a>10||b<1||b>10||ps[a][b]!=ps[x][y])
            {
                flag=false; break;
            }
        }
        if(flag) break;
    }
    return flag;
}
 
int main()
{
    for(int i=1; i<=10; i++) scanf("%s",ps[i]+1);
    for(int i=1; i<=10; i++) for(int j=1; j<=10; j++) if(ps[i][j]!='*')
        if(shi(i,j))
        {
            if(ps[i][j]=='.') printf("lantuziyyds!\n");
            else printf("laoshubaobaoyyds!\n");
            return 0;
        }
    printf("qie~~\n");
    return 0;
}