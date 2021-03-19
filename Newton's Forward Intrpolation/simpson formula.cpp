#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float a,b,h,x[10],y[10],en=0,on=0,s=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the value of upper limit:\n");
	scanf("%f",&a);
	printf("Enter the value of lower limit:\n");
	scanf("%f",&b);
	h=(a-b)/n;
	x[0]=b;
	x[n]=a;
	for(i=1;i<=n;i++)
	{
		x[i]=x[0]+(i*h);
	}
	for(i=0;i<=n;i++)
	{
		y[i]=1/(1+(x[i]*x[i]));
	}
	for(i=1;i<n;i++)
	{
	if(i%2==1)
	{
		on=on+y[i];
	}
	else
	{
		en=en+y[i];
	}
    }
    s=h/3*(y[0]+y[n]+4*on+2*en);
    printf("Final value of the integration is : %f",s);
    return 0;
}
