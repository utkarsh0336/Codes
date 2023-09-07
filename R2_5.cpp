#include<iostream>
using namespace std;
void f(int i,int n){
    if(i<1)  return;
    f(i-1,n);
    cout<<n-i+1<<endl;
}

int main(){
    int n;
    cout<<"How many times you want to print the number in reverse order?"<<endl;
    cin>>n;
    f(n,n);
return 0;
}