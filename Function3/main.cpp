#include<stdio.h>
#include<conio.h>
#include<math.h>
void add(int x,int y){
int z;
z=x+y;
printf("Result : %d",z);
}
int main(){
    int a,ans,b;
    printf("Enter a No : ");
    scanf("%d",&a);
    printf("Enter another No : ");
    scanf("%d",&b);
    add(a,b);
    getch();
    return 0;
}
