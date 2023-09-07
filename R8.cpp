                                         //************MERGE_SORT**************//
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i - low];
    }
     
}

void mS(vector<int> &arr,int low,int high){
    if(low >= high){
        return;
        }
        int mid = (low+high)/2;
        mS(arr,low,mid);
        mS(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

int main(){

    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    int n = arr.size()-1;
    mS(arr,0,n);
    for(auto it : arr){
        cout<<it<<" ";
    }
    
    return 0;
}