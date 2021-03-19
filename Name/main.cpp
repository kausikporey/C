#include<stdio.h>
#include<conio.h>
int main(){
int i;
char a[]="Kausik";
char b[]="Joydev";
char c[]="Hello";
char *p1,*p2,*p3;
p1=&a[5];
p2=&b[5];
p3=&c[5];
printf("Name : %s\n",*p1);
printf("Name : %s\n",*p2);
printf("Name : %s\n",*p3);
}
