#include<iostream>
using namespace std;
int main(){
    int arr[5] = {16,29,76,29,36};
    int *p = arr;
    cout<<"The address of the first block of the array is "<<p<<endl;
    cout<<"The value at the address of the first block is "<<*p<<endl;
    p++;
    cout<<"The value at the address after incrementing by 1 is "<<*p<<endl;

return 0;
}