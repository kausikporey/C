#include<stdio.h>
#include<conio.h>
int main(){
    FILE *p;  //we have to create a pointer of type FILE to handle the file
    char c;
    p = fopen("kousik.txt","a");  //open the file
    printf("Enter Text :");
    while((c=getchar())!=EOF){  //getchar takes the input from user as a character
         putc(c,p);     //putc() will put the new character into the file pointed by the pointer.
        }
    fclose(p);

    p = fopen("kousik.txt","r");
    while((c=getc(p))!=EOF){ //getc() will takes the char from a file pointed by the pointer.
         printf("%c",c);  //close the file
        }
    fclose(p);
}
/*mode: 'r'  = read mode
        'w'  = write mode
        'a'  = add mode
        */
