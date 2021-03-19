#include<stdio.h>
#include<conio.h>
int main(){
   FILE *p;
   int roll;
   char name[10];
   printf("Enter Your roll no : ");
   scanf("%d",&roll);
   printf("Enter Your roll no : ");
   scanf("%s",&name);
   p = fopen("sayan","w");
   fprintf(p,"%d%s",roll,name);  //this stores the value of x into the file.
   fclose(p);

   p = fopen("sayan","r");
   fscanf(p,"%d%s",&roll,&name);    //this reads the value from the file.
   fclose(p);
   printf("Name : %s and Roll No : %d",name,roll);
   getch();
}
