#include<stdio.h>
#include<conio.h>
class Student{
private:
    int no;
    static int count;
public:
    void getno(void);
    void disp(void);
    static void dis(void);
};
void Student::getno(void){
no=++count;
}
void Student::disp(void){
printf("Number : %d",no);
}
void Student::dis(void){
printf("Count : %d",count);
}
int Student :: count;
int main(){
Student st1,st2,st3;
st1.getno();
st2.getno();
st1.dis();
printf("\n");
st3.getno();
st2.dis();
printf("\n");
st1.disp();
printf("\n");
st2.disp();
printf("\n");
st3.disp();
printf("\n");
getch();
return 0;
}
