#include<stdio.h>
main()
{
	int n,x,y;
	scanf("%d %d %d",&n,&x,&y);
	n=n%(x+y);
	if(n>=x) printf("MAKE AMERICA GREAT AGAIN");
	else printf("F=ma");
}