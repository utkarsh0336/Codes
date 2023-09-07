#include<iostream>
using namespace std;
                     //BACKTRACKING//

void f(int i,int n){
    if(i<1)  return;
    f(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"How many times you want to print the name?"<<endl;
    cin>>n;
    f(n,n);
    return 0;
}