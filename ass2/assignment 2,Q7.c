#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,p,q,r;
float c1,c2;
printf("enter the value of a,b,c,p,q,r");
scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
float x=(b*r-c*q)/(a*q-b*p);
float y=(a*r-p*c)/(a*q-b*p);
printf("%f%f",x,y);
}