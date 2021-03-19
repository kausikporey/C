#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the Number of rows : ";
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
}
