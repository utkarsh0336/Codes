#include <iostream>
using namespace std;

int main()
{
    // int n;
    // int cnt = 0;
    // cin >> n;
    // int j = n;
    // while (j)
    // {
    //     int digit = n % 10;
    //     if (digit == 1)
    //     {
    //         cnt++;
    //     }
    //     if (j < 0)
    //         return 0;
    //     n /= 10;
    //     if (n == 0)
    //     {
    //         j--;
    //         n = j;
    //     }
    // }
    // cout << cnt;

    int t;
    cin>>t;
    while (t--)
    {
    
    int n;
    cout<<"Enter the number you want to check whether it is a Prime or not ?"<<endl;
    cin>>n;
    if(n == 1 || n == 0){
         cout<<"It is not a prime number"<<endl;
         return 0;}
    bool check = true;
    for(int i = 2 ; i<n;i++){
        if(n%i == 0){
            check = false;
        }
    }
    if(check) cout<<n<<" is a Prime number"<<endl;
    else cout<<n<<" is not a Prime number"<<endl;    /* code */
    }
    
    return 0;
}