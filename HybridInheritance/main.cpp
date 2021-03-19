#include<stdio.h>
#include<conio.h>
class student{
protected:
    int roll_no;
public :
    void put_roll_no(int x){
    roll_no=x;
    }
};
class test:public student{
protected :
    int m1,m2;
public :
    void put_marks(int y,int z){
    m1=y;
    m2=z;
    }
};
class sports{
protected:
    int s;
public:
    void put_s(int t){
    s=t;
    }
};
class result:public test,public sports{
private:
    int cls;
public :
    void put_cls(int w){
    cls=w;
    }
    void get_sports(void){
    printf("Roll No : %d ,sports result : %d and Class : %d \n",roll_no,s,cls);
    }
    void get_test(void){
    printf("Bengali marks: %d ,English marks: %d and Class : %d\n",m1,m2,cls);
    }
};
int main(){
result r;
r.put_roll_no(101);
r.put_marks(54,47);
r.put_s(94);
r.put_cls(12);
r.get_sports();
r.get_test();
getch();
return 0;
}
