#include<stdio.h>
#include<conio.h>
class Base{
public :
    void disp(){
    printf("Base Class Disp Function is called.\n");
    }
    virtual void show(){
    printf("Base Class show function is called.\n");
    }
};
class  Derived:public Base{
public :
    void disp(){
    printf("Derived Class disp function is called.\n");
    }
    void show(){
    printf("Derived Class show function is called .\n");
    }
};
int main(){
Base *p;
Base objb;
Derived objd;
p=&objb;
p->disp();
p->show();
p=&objd;
p->disp();  //Normally at the compilation time disp will bind as class of pointer for early binding
p->show();  // To avoid this we have to create late binding by virtual keyword that means disp will bind as the object of the pointer at the run time
getch();
return 0;
}
