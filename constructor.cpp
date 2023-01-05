#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(int x,int y){
            a = x;
            b = y;
            cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        friend void sumComplex(Complex o1,Complex o2);
};

void sumComplex(Complex o1,Complex o2){
    cout<<"The sum is "<<(o1.a + o2.a)<<" + "<<(o1.b + o2.b)<<"i"<<endl;
}
int main(){
    Complex o1(4,3);
    Complex o2(3,4);
    sumComplex(o1,o2);



return 0;
}