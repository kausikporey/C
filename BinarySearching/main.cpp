#include<stdio.h>
#include<conio.h>
int BinarySearch(int x[],int len,int element){
    int low,high,mid;
    low = 0;
    high = len - 1;
    while(low<=high){
        mid = (high+low)/2;
        if(x[mid] == element){
             return mid;
        }
        if(x[mid]>element){
            high = mid-1;
        }
        if(x[mid]<element){
            low = mid+1;
        }
   }
   return -1;
}
int main(){
    int ln,no,x;
    int arr[11] = {1,2,4,7,8,12,15,18,20,27,29};
    printf("Type the no you want to search : \n");
    scanf("%d",&no);
    ln = sizeof(arr)/sizeof(int);
    x = BinarySearch(arr,ln,no);
    printf("The No %d found at position %d.",no,x);
}
