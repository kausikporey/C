#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return((x*x)+x-7);
}
int main()
{
float a,b,c;
printf("Enter The Value of a and b:\n");
scanf("%f%f",&a,&b);
c=(a+b)/2;
do
{
    c=(a+b)/2;
    if(f(a)*f(c)<0)
	{
		b=c;
	}
	else
	{
		a=c;
	}
}
while(fabs(a-b)>0.0001);
printf("The Value of Root Is:%f",c);
return 0;
}
