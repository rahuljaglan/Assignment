#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,e,f,g,h;
	float c1,c2,c3,r1,r,d1,area;
	printf("enter the values of constants");
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	c1=-e/2;
	c2=-f/2;
	c3=-g/2;
	d1=((a*c1)+(b*c2)+(c*c3)+d)/sqrt((a*a)+(b*b)+(c*c));
	r1=sqrt(((c1*c1)+(c2*c2)+(c3*c3))-h);
	r=sqrt((r1*r1)-(d1*d1));
	area=3.14*r*r;
	printf("\narea is:%f",area);
}
	