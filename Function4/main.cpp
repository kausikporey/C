#include<stdio.h>
#include<conio.h>
#include<math.h>
int add(void){
int a,b,c;
printf("Enter a No : ");
scanf("%d",&a);
printf("Enter another No : ");
scanf("%d",&b);
c=a*b;
return c;
}
int main(){
    int ans;
    ans=add();
    printf("Result : %d",ans);
    getch();
    return 0;
}
