#include<stdio.h>
#include<conio.h>
int main(){
    FILE *p;
    int x;
    p = fopen("kp.txt","w");
    for(int i=0;i<20;i++){
       putw(i,p);    //write the integer variable in a file.
    }
    fclose(p);


    p = fopen("kp.txt","r");
    while((x=getw(p))!= EOF){  //getw() read the integer variable in a file.
          printf("%d\n",x);
    }
    fclose(p);

}
