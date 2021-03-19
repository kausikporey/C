#include<stdio.h>
#include<conio.h>
int main(){
const int x = 2;
int s;
s = x*x;
printf("Before : %d\n",s);
//x = 4;  //we cannot change the value of x because of const keyword
//s = x*x;
//printf("After : %d\n",s);
getch();
return 0;
}
