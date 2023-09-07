            // Counting the number of subsequences whose sum is

#include<bits/stdc++.h>
using namespace std;

int printS(int ind,vector<int> &ds,int arr[],int n,int s,int sum){
    int l,r;
    if(ind == n){
        if(s == sum){
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    l = printS(ind+1,ds,arr,n,s,sum);

    ds.pop_back();
    s -= arr[ind];
    r = printS(ind+1,ds,arr,n,s,sum);

    return l+r;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    int count = printS(0,ds,arr,n,0,sum);
    cout<<"The number of subsequences whose sum is "<<sum<<" is "<<count;
    
    return 0;
}