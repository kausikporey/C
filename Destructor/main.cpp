#include<stdio.h>
#include<conio.h>
class test{
static int count;
public :
    test(){
    count++;
    printf("Object Created : %d\n",count);
    }
    ~test(){
    printf("Object Destructed : %d\n",count);
    count--;
    }
};
int test::count;
int main(){
printf("Main Block : \n");
test t1;{
printf("Block 1\n");
test t2,t3;
printf("Exit from Block 1.\n");
}
printf("Exit From Main Block .\n");
getch();
return 0;
}
