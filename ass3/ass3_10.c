#include<stdio.h>
void main()
{
    int a,b,c,d,x,n=0;
    printf("give four numbers.(separated by ',')\nat last give the number you want to check for equality(separated by ';') :\n");
    scanf("%d,",&a);
    scanf("%d,",&b);
    scanf("%d,",&c);
    scanf("%d;",&d);
    scanf("%d",&x);
    if(x==a)
    {
        n++;
    }
    if(x==b)
    {
        n++;
    }
    if(x==c)
    {
        n++;
    }
    if(x==d)
    {
        n++;
    }
printf("%d number repeated %d times",x,n);
}
