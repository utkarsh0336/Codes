// There are two types of header files:
// 1. System Header Files:It comes with the compiler. 
#include<iostream>
// 2. User defined Header Files:It is written by the programmer.
// #include "this.h" We have to make a file with a name "this.h" then it will be used.Otherwise it will give an error.
using namespace std;

int main(){

    int a = 4, b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of Operators in C++"<<endl;
    //Arithmetic Operators.
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    //Assignment Operators --> Used to assign values to variables.
    // int a = 3, b = 9;
    // char d = 'd';
    cout<<endl<<endl;
    // Comparison Operators
    cout<<"Following are the Comparison Operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a == b)<<endl;
    cout<<"The value of a != b is "<<(a != b)<<endl;
    cout<<"The value of a > b is "<<(a > b)<<endl;
    cout<<"The value of a < b is "<<(a < b)<<endl;
    cout<<"The value of a <= b is "<<(a <= b)<<endl;
    cout<<"The value of a >= b is "<<(a >= b)<<endl;

     // Logical Operators
     cout<<endl<<endl;
    cout<<"Following are the Logical Operators in C++"<<endl;
    cout<<"The value of this logical AND Operator ((a == b) && (a<b)) logical operator is "<<((a == b) && (a<b))<<endl;
    cout<<"The value of this logical OR Operator ((a == b) || (a<b)) logical operator is "<<((a == b) || (a<b))<<endl;
    cout<<"The value of this logical NOT Operator (!(a == b))  logical operator is "<<!((a == b))<<endl;
    


    return 0;
}