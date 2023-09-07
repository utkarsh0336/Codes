#include<iostream>
using namespace std;

// TC :--> O(n)
// SC :--> O(n)   uses Stack Space

void f(int i,int n){
    if(i>n) return;
    cout<<"Raj"<<endl;
    f(i+1,n);  
}

int main(){
    int n;
    cout<<"How many times you want to print the name?"<<endl;
    cin>>n;
    f(1,n);
    return 0;
}