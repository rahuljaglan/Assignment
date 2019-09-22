#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float c1,c2,r;
printf("enter numbers a,b,c");
scanf("%f%f%f",&a,&b,&c);
c1=-(a/2);
c2=-(b/2);
r=sqrt(c1*c1+c2*c2-c);
printf("%f%f%f",c1,c2,r);
}