#include<iostream>
using namespace std;
void PrintArray(int *arr,int n){
    cout<<"The array is "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int size,key;
    int arr[size];
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    for(int i = 0;i<size;i++){
        cout<<"Enter the element number "<<i+1<<endl;
        cin>>arr[i];
    }
    PrintArray(arr,size);
    cout<<"Enter the element you want to Search "<<endl;
    cin>>key;

    for(int i = 0;i<size-1;i++){
        if(arr[size-1] == key){
            cout<<"The Element is found at "<<size-1<<" position whose value is "<<key<<endl;
        }
       else if(arr[i] == key){
            cout<<"The Element is found at "<<i+1<<" position whose value is "<<key<<endl;
        }       
    }  
    cout<<"The key "<<key<<" is not present in the array"<<endl;
    return 0;
}
