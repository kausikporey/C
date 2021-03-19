#include<stdio.h>
#include<conio.h>
class B;
class A{
int a;
public:
    void getval(int x){
        a = x;
}
friend void add(A,B);
};
class B{
int b;
public:
    void getval(int x){
        b = x;
}
friend void add(A,B);
};
void add(A obj1,B obj2){
int s;
s = obj1.a + obj2.b;
printf("Value : %d",s);
}
int main(){
A a;
B b;
a.getval(6);
b.getval(8);
add(a,b);
}
