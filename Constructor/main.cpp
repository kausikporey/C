#include<stdio.h>
#include<conio.h>
class Test{
private :
    int a,b;
public :
    Test();
    Test(int x);
    Test(int x,int y);
    void disp(void);
};
Test::Test()
{
    a=b=0;
}
Test::Test(int x)
{
    a=b=x;
}
Test::Test(int x,int y){
a=x;
b=y;
}
void Test::disp(void){
printf("Value Of a is %d and b Is %d\n",a,b);
}
int main(){
Test t;
Test t2(100);
Test t3(15,16);
printf("Object in t : \n");
t.disp();
printf("Object in t2 : \n");
t2.disp();
printf("Object in t3 : \n");
t3.disp();
getch();
return 0;
}
