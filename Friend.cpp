#include<iostream>
using namespace std;
class Employee{
    string EName;
    public:
    int Eid;
    int salary;
    void setName(string Name);
    string getName();
};

void Employee :: setName(string Name){
    EName = Name;
}

string Employee :: getName(){
    cout<<"The name of the Employee is "<<EName<<endl;
    
}

class Complex{
    int a,b;
    public:
        void setNum(int n1, int n2){
            a = n1;
            b = n2;
        }
        void getNum(){
            cout<<"The complex number is "<<a<<" + "<<"i"<<b<<endl;
        }
        friend Complex sumComplex(Complex o1,Complex o2);
};

Complex sumComplex(Complex o1,Complex o2){
    Complex sum;
    cout<<"The sum of complex numbers is "<<(o1.a+o2.a)<<" + "<<"i"<<(o1.b+o2.b)<<endl;
    // sum.setNum((o1.a+o2.a) , (o1.b + o2.b));
    // cout<<"The sum of two complex number is "<<endl;
}

int main(){

    Employee e1;
    string ename;
    e1.Eid = 1000;
    e1.salary = 100000;
    cout<<"Enter the name of the Employee"<<endl;
    cin>>ename;
    e1.setName(ename);
    e1.getName(); 
     
     Complex c1,c2,s;
     c1.setNum(4,3);
     c2.setNum(3,4);
     c1.getNum();
     c2.getNum();
     s = sumComplex(c1,c2);
    //  s.getNum();
     return 0;
}