#include<stdio.h>
#include<conio.h>
class Base{
int a;
public:
    Base(int x){
    a=x;
    }
    void dispa(void){
    printf("Value of a : %d\n",a);
    }
};
class Derived:public Base{
int b;
public:
    Derived(int x,int y):Base(x),b(y){
    printf("Derived class constructor initialize .\n");
    }
    void dispb(void){
    printf("Value of b : %d\n",b);
    }
};
int main()
{
    Derived d(10,20);
    d.dispa();
    d.dispb();
    getch();
    return 0;
}
