#include<iostream>
using namespace std;
int main(){
    int a,count = 0;
    cout<<"Enter the number you want to check whether it is a Prime Number or not???"<<endl;
    cin>>a;
    for(int i = 2;i<=a;i++){
        if(a%i == 0){
            count++;
        }
    }
        
    if(count == 1){
        cout<<a<<" is a Prime Number"<<endl;
    }
    else if(count>1){
        cout<<a<<" is not a Prime Number"<<endl;
    }
    else{
        cout<<a<<" is not a Prime Number"<<endl;
    }
 return 0;
}