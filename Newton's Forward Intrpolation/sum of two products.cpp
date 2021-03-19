#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    float x[10],y[10][10],u,a,h,s=0,p=1;
    printf("Enter the no of terms:\n");
    scanf("%d",&n);
    printf("Enter the interpolating point:\n");
    scanf("%f",&a);
    printf("Enter the value of x and y:\n");
    for(i=0;i<n;i++)
    {
    scanf("%f%f",&x[i],&y[i][0]);
    }
    for(j=1;j<n;j++)

    {
        for(i=0;i<n;i++)
        y[i][j]=y[i+1][j-1]-y[i][j-1];
        
    }
    printf("The Difference table is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        printf("%f\t",y[i][j]);
        printf("\n");
    }
    h=x[1]-x[0];
    u=(a-x[0])/h;
    for(i=1;i<n;i++)
    {
        p=p*((u-i+1)/i);
        s=s+p*y[0][i];
    }
    printf("The required value is:\n %f",s+y[0][0]);
    getch();
}

