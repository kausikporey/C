/*Run time polymorphism: function name is same in different classes
but the implementation of the function is different.
When we use the function in main the appropriate function will be chosen by the compiler.*/
#include<stdio.h>
#include<conio.h>
class A{
public:
    virtual void disp()=0;
    };
class B:public A{
int val1;
public:
    B(int x){
    val1=x;
    }
    void disp(){
    printf("Value of B : %d\n",val1);
    }
};
class C:public A{
int val2;
public :
    C(int x){
    val2=x;
    }
    void disp(){
    printf("Value of C : %d\n",val2);
    }
};
int main(){
A *p;//A *p[2]
B objb(100);
C objc(200);
p=&objb;//p[0]=&objb;
(*p).disp();//p[0]->disp();
p=&objc//p[1]=&objc;
(*p).disp();//p[1]->disp();
getch();
return 0;
}
