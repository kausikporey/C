#include<stdio.h>
#include<conio.h>
class A{
int a;
public:
    A(int x){
    a=x;
    printf("A class Constructor is derived \n");
    }
    void dispa(){
    printf("Value of a : %d\n",a);
    }
};
class B{
int b;
public:
    B(int y){
    b=y;
    printf("B class Constructor is derived \n");
    }
    void dispb(){
    printf("Value of b : %d\n",b);
    }
};
class C:public A,public B{
int c;
public:
    C(int m,int n,int p):A(m),B(n){
        c=p;
        printf("C class constructor is derived\n");
}
    void dispc(){
    printf("Value of c : %d\n",c);
    }
};
int main(){
C obj(1,8,7);
obj.dispa();
obj.dispb();
obj.dispc();
getch();
return 0;
}
