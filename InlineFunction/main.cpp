#include<stdio.h>
#include<conio.h>
inline int add(int x,int y){               /*inline function, when we call the fn in main function compiler just put the function code into the main
int z;                                     function for a smaller function.*/
z=x+y;
}
int main(){
int a=2,b=5,ans;
ans=add(a,b);
printf("Result : %d",ans);
getch();
return 0;
}
