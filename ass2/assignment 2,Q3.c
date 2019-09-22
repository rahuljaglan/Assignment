#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,e,f;
	float d1,d2,d3,s,area;
	printf("enter the value of points");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	d1=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	d2=sqrt((e-a)*(e-a)+(f-b)*(f-b));
	d3=sqrt((c-e)*(c-e)+(d-f)*(d-f));
	s=(d1+d2+d3)/2;
	area=sqrt(s*(s-d1)*(s-d2)*(s-d3));
	printf("\narea is %f", area);
}