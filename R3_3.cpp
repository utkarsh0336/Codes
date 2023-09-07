#include<iostream>
using namespace std;
void fact(int i,int n){
    if(i<=1){
        cout<<n<<endl;
        return;
    }
    fact(i-1,n*(i-1));
}

int main(){
    int n;
    cout<<"Enter the number upto which you want the factorial?"<<endl;
    cin>>n;
    fact(n,n);
    
return 0;
}