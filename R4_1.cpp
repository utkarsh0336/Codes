#include<iostream>
using namespace std;

void array(int arr[],int n){
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void printArray(int arr[],int n){
    cout<<"The array is"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void func(int i,int arr[],int n){
    if(i>=n/2)  return;
    swap(arr[i],arr[n-i-1]);
    func(i+1,arr,n);
}

int main(){
    int n;
    cout<<"What is the size of the array ?"<<endl;
    cin>>n;
    int arr[n];
    array(arr,n);
    printArray(arr,n);
    func(0,arr,n);
    cout<<"The reverse of ";
    printArray(arr,n);
    
return 0;
}