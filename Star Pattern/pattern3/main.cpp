#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the Number of Rows : ";
    cin>>a;
    for(int i=0;i<a;i++){
        for(int space = 0;space<i;space++){
            cout<<" ";
        }
        for(int j=0;j<a-i;j++){
            cout<<"*";
       }
       cout<<"\n";
    }
}
