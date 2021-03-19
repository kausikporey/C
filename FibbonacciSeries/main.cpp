#include<stdio.h>
#include<conio.h>
void fibbonacci(int n){
    int a = 0,b = 1,c;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=2;i<n;i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d\n",b);
    }
}
int main(){
    int n;
    printf("Enter the limit you want to print the fibonacci series : ");
    scanf("%d",&n);
    printf("\t\t***** F I B B O N A C C I    S E R I E S  *****\n");
    fibbonacci(n);
}
