#include<stdio.h>
#include<conio.h>
int main(){
int a=100;
int &ref=a;
printf("The Value of a and ref : %d and %d\n",a,ref);
printf("The address of ref and a is : %d and %d\n",&a,&ref);
getch();
return 0;
}
