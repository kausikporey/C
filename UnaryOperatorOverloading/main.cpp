#include<stdio.h>
#include<conio.h>
class test{
int a,b,c;
public:
    void getdata(int x,int y,int z);
    void operator -();
    void disp(void);
};
void test::getdata(int x,int y,int z){
a=x;
b=y;
c=z;
}
void test::operator -(){
a=-a;
b=-b;
c=-c;
}
void test::disp(){
printf("Value of a: %d\nValue of b: %d\nValue of c: %d\n
       ",a,b,c);
}
int main(){
test t;
t.getdata(5,-8,4);
t.disp();
-t;
t.disp();
getch();
return 0;
}
