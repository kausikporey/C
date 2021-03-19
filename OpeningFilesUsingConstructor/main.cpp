#include<stdio.h>
#include<fstream.h>
int main(){
char name[20];
float cost;
ofstream outf("data");
printf("Enter Item Name : ");
scanf("%s",&name);
printf("Enter Item Cost : ");
scanf("%f",&cost);
outf<<name<<"in";
outf<<cost<<"In";
outf.close();
ifstream inf("data");
inf>>name;
inf>>cost;
printf("Item Name : %s",name);
printf("Item Cost : %f",cost);
inf.close();
getch();
return 0;
}
