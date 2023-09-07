#include<iostream>
using namespace std;

bool checkPalindrome(int i,string &s){
    if(i>=s.size()/2)   return true;
    else if(s[i] != s[s.size()-i-1])  return false;
    return checkPalindrome(i+1,s);
}

int main(){
    string s;
    bool ans;
    cout<<"Enter the string that you want to check whether it is a palindrome or not"<<endl;
    cin>>s;
    ans = checkPalindrome(0,s);
    if(ans){
      cout<<"It is a Palindrome"<<endl;
    }
    else{
    cout<<"It is not a Palindrome"; 
    }
    return 0;
}