#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
int op;
printf("Enter The Value of a : ");
scanf("%d",&a);
printf("Enter The Value of b : ");
scanf("%d",&b);
printf("Choose Operator :  ");
scanf("%d",&op);
switch(op){
case 1:
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    c=a/b;
    break;
}
printf("Result : %d",c);
}
