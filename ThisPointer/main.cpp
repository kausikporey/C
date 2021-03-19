#include<stdio.h>
#include<conio.h>
class st{
private:
    int roll;
public:
    void def(int roll){
     this->roll = roll;
    }
    void show(void){
    printf("Roll no :%d",roll);
    }
};
int main(){
st s;
s.def(101);
s.show();
return 0;
}
