#include<stdio.h>
#include<conio.h>
class A{
protected:
    int a;
public :
    void get_a(int x){
    a=x;
    }
};
class B{
protected:
   int b;
public:
    void get_b(int y){
    b=y;
    }
};
class C:public A,public B{
private:
    int c;
public:
    void add(void){
    c=a+b;
    }
    void disp(void){
    printf("Addition : %d",c);
    }
};
int main(){
C obj;
obj.get_a(4);
obj.get_b(8);
obj.add();
obj.disp();
getch();
return 0;
}
