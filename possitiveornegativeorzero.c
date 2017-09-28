#include<stdio.h>
#include<conio.h>
void main()
{
double n;
printf("enter your number");
scanf("%lf",&n);
if(n<=0.0)
{
if(n==0.0)
printf("your number is zero");
else
printf("your number is negative");
}
else
printf("your number is possitive");
return 0;
}
