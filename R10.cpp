#include<bits/stdc++.h>
using namespace std;
vector<int> subsetSum(int ind,vector<int> &s,int sum,vector<int> &ans){
    if(ind == s.size()){
        return ans;
    }
    subsetSum(ind+1,s,sum+s[ind],ans);
    ans.push_back(sum+s[ind]);
    subsetSum(ind+1,s,sum,ans);
    return ans;
}
int main(){
    vector<int> s;
    s.push_back(3);
    s.push_back(1);
    s.push_back(2);
    vector<int> ans;
    cout<<s.size()<<endl;
    subsetSum(0,s,0,ans);
    sort(ans.begin(),ans.end());
    for(auto it : ans){
        cout<<it<<" ";
    }
    
return 0;
}