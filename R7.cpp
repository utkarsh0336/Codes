                // Printing all the subsequences whose sum is given
#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector<int> &ds,int arr[],int n,int s,int sum){
    if(ind == n){
        if(s == sum){
            for(auto it : ds){
                cout<<it<<" ";
            }
                cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];

    printF(ind+1,ds,arr,n,s,2);

    ds.pop_back();
    s -= arr[ind];

    printF(ind+1,ds,arr,n,s,2);
}
int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printF(0,ds,arr,n,0,sum);

    
    return 0;
}