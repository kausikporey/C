#include<stdio.h>
#include<conio.h>
int main(){
int *p;
int arr[4]={1,5,8,7};
p=&arr[0];
printf("Base Address : %d",*p);
getch();
return 0;
}
