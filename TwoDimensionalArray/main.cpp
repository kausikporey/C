#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
printf("Enter the No of Rows : \n");
scanf("%d",&i);
printf("Enter the No of Columns : \n");
scanf("%d",&j);
int ar[i][j],a,b;
printf("Enter The Elements : \n");
for(a=0;a<i;a++){
    for(b=0;b<j;b++){
        scanf("%d",&ar[a][b]);
    }
    }
    printf("Your Output is : \n");
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
        printf("%d\t",ar[a][b]);
    }
    printf("\n");
}
getch();
return 0;
}
