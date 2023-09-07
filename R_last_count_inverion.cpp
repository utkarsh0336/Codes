                                         //************Count Inversion**************//
#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int cnt = 0;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt += (mid-left+1);
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
     return cnt;
}

int mS(vector<int> &arr,int low,int high){
    int cnt = 0;
    if(low >= high){
        return cnt;
        }
        int mid = (low+high)/2;
        cnt += mS(arr,low,mid);
        cnt += mS(arr,mid+1,high);
        cnt += merge(arr,low,mid,high);
        return cnt;
    }

int main(){

    vector<int> arr = {5,3,2,4,1};
    int n = arr.size()-1;
    int cnt = mS(arr,0,n);
    cout<<"The sorted array is"<<endl;
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"The count inversion is "<<cnt;
    
    return 0;
}