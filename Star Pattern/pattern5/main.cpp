#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter The no of rows : ";
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
        cout<<"* ";
    }
    cout<<"\n";
  }
}
