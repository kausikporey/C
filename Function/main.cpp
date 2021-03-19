#include<stdio.h>
#include<conio.h>
#include<math.h>
int add(int x,int y){
int z;
z=x+y;
}
int main(){
    int a,ans,b;
    printf("Enter a No : ");
    scanf("%d",&a);
    printf("Enter another No : ");
    scanf("%d",&b);
    ans=add(a,b);
    printf("Result : %d",ans);
    getch();
    return 0;
}
