#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
int i,len;
char x[]="Kasuik";
len=strlen(x);
printf("Size : %d\n",sizeof(x));
printf("Length : %d\n",len);
printf("Name : %s",x);
getch();
}
