#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter three no.\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a!=b&&a!=c)
		printf("\n%d",a);
	else
	{
		if(b!=a&&b!=c)
			printf("\n%d",b);
		else
			printf("\n%d",c);

	}
	return 0;
}