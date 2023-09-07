                    // QUICK SORT IN DESCENDING ORDER//
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]>=pivot && i<=high-1){
            i++;
        }
        while(arr[j]<pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[low],arr[j]);
    return j;
}

void QS(vector<int> &arr,int low,int high){
    if(low<high){
    int j = partition(arr,low,high);
    QS(arr,low,j-1);
    QS(arr,j+1,high);
    }
}

int main(){
    vector<int> arr {4,6,3,5,7,9,1,3};
    int n = arr.size()-1;
    QS(arr,0,n);
    for(auto it : arr){
        cout<<it<<" ";
    }
    
return 0;
}