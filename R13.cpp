#include<bits/stdc++.h>
using namespace std;
vector<int> allPer(int ind,vector<int> &nums,vector<int> &ds,vector<int> &ans){
    if(ind == nums.size()){
        ans.push_back(ds);
        return ans;
    }
    for(int i = 0;i<nums.size();i++){
        swap(nums[ind],nums[i]);
        allPer(ind+1,nums,ds,ans);
        swap(nums[ind],nums[i]);
    }
    return ans;
}

int main(){
    vector<int> nums;
    vector<int> ds;
    vector<vector<int>> ans;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vectorallPer(0,nums,ds,ans);

    return 0;
}