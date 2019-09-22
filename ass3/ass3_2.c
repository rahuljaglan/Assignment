#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter four no.\n ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	e=(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d)));
	printf("\n The biggest no. is : %d",e);
	return 0;
}