#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float S,area;
	printf("enter values of sides");
	scanf("%d%d%d",&a,&b,&c);
	S=(a+b+c)/2;
	area=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("\n%f",area);
	return 0;
 }
 
    