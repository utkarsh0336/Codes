#include<iostream>
using namespace std;

void f(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}

int main(){
    int i;
    cout<<"Enter the number upto which you want the sum ?"<<endl;
    cin>>i;
    cout<<"The sum of "<<i<<" numbers is ";
    f(i,0);
    return 0;
}