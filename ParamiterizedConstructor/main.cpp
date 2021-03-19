#include<stdio.h>
#include<conio.h>
class Sum{
private:
    int a,b;
public :
    Sum(int x,int y){
    a=x;
    b=y;
    }
void disp(void){
    int z;
    z=a+b;
    printf("Summation Value : %d",z);
}
};
int main(){
Sum s1(4,5);
Sum s2(8,10);
s1.disp();
printf("\n");
s2.disp();
getch();
return 0;
}
