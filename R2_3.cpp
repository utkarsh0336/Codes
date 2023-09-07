#include<iostream>
using namespace std;

void f(int n){
    if(n == 0)  return;
    cout<<n<<endl;
    f(n-1);
}

int main(){
    int n;
    cout<<"How many numbers you want to print in reverse order?"<<endl;
    cin>>n;
    f(n);
    return 0;
}