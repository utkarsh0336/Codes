#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n)  return;
    cout<<i<<endl;
    f(i+1,n);
}

int main(){
    int n;
    cout<<"How many times you want to print the numbers?"<<endl;
    cin>>n;
    f(1,n);
    return 0;
}