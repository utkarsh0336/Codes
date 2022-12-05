#include<iostream>
using namespace std;
class Animal{
    
        private:
          int c,d;  
        
        public:
          int a,b;
    void sound();
    void weight(){
        cout<<"The Weight of the animal is "<<a<<endl;
    }      
};

 void Animal::sound(){
    cout<<"Animal has louder voice"<<endl;
}
int main(){
    // for(int i = 0;i<5;i++){
    //     cout<<i<<endl;
    // }
    // cout<<"Hello"<<endl;
    Animal A;
    A.a = 1;
    A.b = 2;
    // A.c = 3;
    A.sound();
   A.weight();
    return 0;
}