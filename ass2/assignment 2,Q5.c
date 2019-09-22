#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d,e;
float distance;
printf("enter the first coordinate");
scanf("%d%d",&a,&b);
printf("enter the values of constant of cx+dy+e=0");
scanf("%d%d%d",&c,&d,&e);
distance=(c*a+b*d+e)/sqrt(c*c+d*d);
printf("%f",distance);






}