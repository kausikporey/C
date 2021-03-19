#include<stdio.h>
#include<conio.h>
class A{
protected:
    int a=5;
public :
    void dispa(void){
    printf("Value Of a is : %d\n",a);
    }
};
class B:public virtual A{
protected:
    int b=9;
public :
    void dispb(void){
    printf("Value Of a is : %d\n",b);
    }
};
class C:public virtual A{
protected:
    int c=2;
public :
    void dispc(void){
    printf("Value Of a is : %d\n",c);
    }
};
class D:public B,public C{
protected:
    int d=12;
public :
    void dispd(void){
    printf("Value Of a is : %d",d);
    }
};
int main(){
D obj;
obj.dispa();
obj.dispb();
obj.dispc();
obj.dispd();
getch();
}
