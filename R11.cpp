            // Subset Sum II
#include<bits/stdc++.h>
using namespace std;

void f(int ind,vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i = ind;i<nums.size();i++){
        if(i != ind && nums[i] == nums[i-1])   continue;
        ds.push_back(nums[i]);
        f(i+1,nums,ds,ans);
        ds.pop_back();
    }
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    vector<int> ds;
    vector<vector<int>> ans;
    f(0,nums,ds,ans);
    
    
return 0;
}