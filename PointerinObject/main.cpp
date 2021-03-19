#include<stdio.h>
#include<conio.h>
class student{
private:
    int roll_no;
    float m1,m2;
public:
    void putvalue(int x,float y,float z){
    roll_no=x;
    m1=y;
    m2=z;
    }
    void getvalue(void){
    printf("Roll No : %d\nBengali Marks : %f\nEnglish Marks : %f",roll_no,m1,m2);
    }
};
int main(){
student obj;
student *obj1;
obj1=&obj;
obj1->putvalue(101,54.01,58.23);
(*obj1).getvalue();
getch();
return 0;
}
