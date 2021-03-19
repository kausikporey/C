#include<stdio.h>
#include<conio.h>
int main(){
int i;
int *p;
int arr[5]={5,8,7,4,5};
p=arr;
for(i=0;i<5;i++){
    printf("The value of arr[%d] = %d\n",i,*p);
    p++;
}
getch();
return 0;
}
