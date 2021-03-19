#include<stdio.h>
#include<conio.h>
class student{
private:
    int roll_no;
    int cls;
public:
    int putdata(void){
    printf("Enter Roll No : ");
    scanf("%d",&roll_no);
    printf("Enter Class : ");
    scanf("%d",&cls);
    }
    void getdata(void){
    printf("Student Information : \nClass : %d  Roll No : %d",cls,roll_no);
    }
};
int main(){
student st;
st.putdata();
st.getdata();
getch();
return 0;
}
