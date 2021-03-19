#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    FILE *p;
    char arr[11],x[10];
    strcpy(x,"I am kousik");
    //strcpy(x,"I am the best.");
    p = fopen("kp","w");
    fputs(x,p);
    fclose(p);


    p = fopen("kp","r");
    fgets(arr,20,p);  // arr = where to store,20 = no of char user want to read,p = file pointer.
    printf("%s",arr);
    fclose(p);
}
