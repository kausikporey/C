#include<stdio.h>
#include<conio.h>
class test{
int a,b;
public:
    test(){
    a=0;
    b=0;
    }
    test(int x,int y){
    a=x;
    b=y;
    }
    test operator +(test t);
    void disp(){
    printf("Value of a : %d\nValue of b : %d\n",a,b);
    }
};
test test::operator +(test t){
    test temp;
    temp.a=a+t.a;
    temp.b=b+t.b;
    return temp;
}
int main(){
test t1,t2,t3;
t1=test(10,20);
t2=test(30,40);
t3=t1+t2;
t1.disp();
t2.disp();
t3.disp();
getch();
return 0;
}
