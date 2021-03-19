#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float a,b,x[10],y[10],h,s=0,t;
	printf("Enter the value of upper limit:\n");
	scanf("%f",&a);
	printf("enter the value of lower limit:\n");
	scanf("%f",&b);
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	x[0]=b;
	x[n]=a;
	h=(a-b)/n;
	for(i=1;i<n;i++)
	{
		x[i]=x[0]+(i*h);
    }
    for(i=0;i<=n;i++)
    {
		y[i]=1/(1+(x[i]*x[i]));
	}
	for(i=0;i<=n;i++)
	printf("The value of y[%d] is:%f\n",i,y[i]);
	for(i=1;i<n;i++)
	{
		s=s+y[i];
	}
	t=(h/2.0)*((y[0]+y[n])+(2*s));
	printf("The value of the integration is : %f",t);
	return 0;
}
