#include<stdio.h>
#include<conio.h>
class A{
protected :
int a;
public:
    void get_a(int x)
    {
        a=x;
    }

};
class B:public A{
int b,c;
public:
    void get_b(int y){
    b=y;
    }
    void add(void){
    c=a+b;
    }
    void disp(void){
    printf("Value of c is : %d",c);
    }
};
int main(){
B obj;
obj.get_a(5);
obj.get_b(7);
obj.add();
obj.disp();
getch();
return 0;
}
