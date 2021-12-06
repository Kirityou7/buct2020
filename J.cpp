#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c %c",&a,&b);
	if(a>b) printf(">");
	else if(a==b) printf("=");
	else printf("<");
}
