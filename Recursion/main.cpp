#include<stdio.h>
#include<conio.h>
int fact(int n){
if(n==0){
    return 1;
}
else return (n*fact(n-1));
}
int main(){
int a;
printf("Enter a No : ");
scanf("%d",&a);
fact(a);
printf("Factorial of %d is %d",a,fact(a));
getch();
return 0;
}
