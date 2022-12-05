#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    // int a = 4;
    // int b = 5;
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'd';
    bool is_true = true;
    cout<< "This is Tutorial 4.\n Here the value of a is "<<a<<".\n The value of b is "<<b;
    cout<< "\nThe value of pi is "<<pi;
    cout<< "\nThe value of c is "<<c;
    sum();
    cout<<glo<<is_true;
    return 0;
}