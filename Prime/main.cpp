#include<stdio.h>
#include<conio.h>
int main(){
int a,flag=0;
printf("Enter The Number : ");
scanf("%d",&a);
if(a==0||a==1){
    printf("%d is not a prime Number ",a);
}
else{
for(int i=2;i<a/2;i++){
    if(a%i==0){
        flag=1;
        break;
   }
}
if(flag==1)
    printf("%d is not a prime Number ",a);
else
    printf("%d is a prime Number ",a);
}
}
