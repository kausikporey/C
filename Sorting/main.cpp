#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
  int len,arr[7] = {4,7,1,6,5,3,2};
  len = sizeof(arr)/sizeof(int);
    int temp,minpos;
    for(int i=0;i<len-1;i++){
        minpos = i;
        for(int j=i;j<len-1;j++){
            if(arr[minpos] > arr[j+1]){
                minpos = j+1;
            }
        }
        if(minpos != i){
         temp = arr[minpos];
         arr[minpos] = arr[i];
         arr[i] = temp;
        }
    }
  for(int i=0;i<len;i++){
    printf("arr[%d] = %d\n",i,arr[i]);
  }
}
