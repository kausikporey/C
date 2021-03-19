#include<stdio.h>
#include<conio.h>
class A{
protected:
    int roll_no;
public :
    void put_r(int x){
    roll_no=x;
    }
};
class B:public A{
private :
    int m1,m2;
public :
    void put_marks(int y,int z){
    m1=y;
    m2=z;
    }
    void get_marks(void){
    printf("Roll No : %d , Bengali Marks : %d and English Marks : %d\n",roll_no,m1,m2);
    }
};
class C:public A{
private:
    int cls;
public :
    void put_cls(int w){
    cls=w;
    }
    void get_cls(void){
    printf("Roll No : %d  and Class : %d \n",roll_no,cls);
    }
};
int main(){
B obj1;
C obj2;
obj1.put_r(101);
obj1.put_marks(85,84);
obj1.get_marks();
obj2.put_r(115);
obj2.put_cls(12);
obj2.get_cls();
getch();
return 0;
}
