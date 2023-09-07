#include<iostream>
using namespace std;

void func(int f,int r,int arr[]){
    if(f>=r)   return;
    swap(arr[f],arr[r]);
    func(f+1,r-1,arr);
}

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

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    array(arr,n);
    printArray(arr,n);
    func(0,n-1,arr);
    cout<<"The reverse of the array is "<<endl;
    printArray(arr,n);
    return 0;
}