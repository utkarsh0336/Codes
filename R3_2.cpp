#include<iostream>
using namespace std;

int f(int n){
    if(n == 0)  return 0;
    return n+f(n-1);
}

int main(){
    int n;
    cout<<"Enter the number upto which you want the sum ?"<<endl;
    cin>>n;
    cout<<"The sum of "<<n<<" numbers is "<<f(n);
    return 0;
}