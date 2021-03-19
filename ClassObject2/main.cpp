#include<stdio.h>
#include<conio.h>
class Test{
private:
    int roll_no;
    float per;
public :
    void putdata(int x,float y);
    void getdata(void);
};
int main(){
Test t1,t2;
t1.putdata(101,66.66);
t1.getdata();
printf("\n");
t2.putdata(115,67.01);
t2.getdata();
getch();
return 0;
}
void Test::putdata(int x,float y){
roll_no=x;
per=y;
}
void Test::getdata(void){
printf("Roll No : %d and Percentage : %f",roll_no,per);
}
