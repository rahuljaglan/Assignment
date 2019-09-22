#include<stdio.h>
#include<math.h>
void main()
{
	float h,k,r,s,d,cl;
	printf("enter the values of h,k,r,s");
	scanf("%f%f%f%f",&h,&k,&r,&s);
	d=(h-s);
	cl=2*sqrt((r*r)-(d*d));
	printf("\n%f",d);
	printf("\nchord length is:%f",cl);
	
}
	