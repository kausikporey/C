#include<stdio.h>
#include<conio.h>
int main(){
int a[5],i;
printf("Enter Your Input : ");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("Your Output Is : \n");
for(i=0;i<5;i++){
    printf("Value of a[%d] = %d\n",i,a[i]);
}
getch();
return 0;
}
