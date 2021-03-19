#include<stdio.h>
#include<conio.h>
void swap(int &p,int &q){
int temp;
temp=p;
p=q;
q=temp;
}
int main(){
int a,b;
printf("Enter the Value of a and b : ");
scanf("%d%d",&a,&b);
swap(a,b);
printf("The Updated value of a and b is : %d  and  %d",a,b);
getch();
return 0;
}
