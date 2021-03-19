#include<stdio.h>
#include<conio.h>
int sum=145;
int main(){
int sum=122;
printf("Local Variable : %d",sum);
printf("Global Variable :  %d",::sum);
getch();
return 0;
}
