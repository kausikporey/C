#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("Highest Score : 500\n");
    int number,guess,nguess=50;
    srand(time(0));
    number = rand()%100 + 1;
    //printf("The number is %d\n",number);
    do{
        printf("Guess The Number : \n");
        scanf("%d",&guess);
        if(number>guess){
           if(number-guess>20){
            printf("You have guessed a too much lower Number.\n");
           }
           else if(number-guess<20){
            printf("You have very close to your number.Please Choose a higher number.\n");
          }
           else{
            printf("Please Guess a Higher Number\n");
          }
        }
        if(number<guess){
            if(number-guess>20 && number<guess){
            printf("You have guessed a too much higher Number\n");
          }
        if(number-guess<20 && number<guess){
            printf("You have very close to your number.Please Choose a lower number.\n");
          }
        else{
            printf("Please Guess a Lower Number\n");
          }
        }
        nguess -= 1;
        if(number==guess){
            printf("Your Score : %d",nguess*10);
        }
    }while(number != guess);
}
