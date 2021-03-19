#include<stdio.h>
#include<conio.h>
class student{
protected:
    int roll_no;
public:
    void put_r(int x){
    roll_no=x;
    }
};
class marks:public student{
protected:
    int m1,m2;
public :
    void put_m(int b,int e){
    m1=b;
    m2=e;
    }
};
class result:public marks{
private:
    char department;
public :
    void put(char a){
    department=a;
    }
    void disp(void){
    printf("Name : %c , Roll_No : %d , Bengali Marks : %d , English Marks : %d",department,roll_no,m1,m2);
    }
};
int main(){
result r;
r.put_r(101);
r.put_m(58,64);
r.put('E');
r.disp();
getch();
return 0;
}
