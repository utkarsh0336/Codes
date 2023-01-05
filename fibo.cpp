#include<iostream>
using namespace std;
int main(){
    int a,b,c,seq = 0;
    cout<<"Enter the term of the Fibonacci Sequence you want to take"<<endl;
    cin>>c;
     a = 0;
     b = 1;
     if(c == 1){
        cout<<"The term you want is 0"<<endl;
     }
     else if(c == 2){
        cout<<"The term you want is 1"<<endl;
     }
     else{
    for(int i = 0;i<c;i++){
        seq = a+b;
        a = b;
        b = seq;
    }
    cout<<"The term you want is "<<seq<<endl;
     }
    

return 0;
}