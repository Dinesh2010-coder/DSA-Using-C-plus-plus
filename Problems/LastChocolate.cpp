#include<iostream>

using namespace std; 

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    // int ans = (b+c-1)%a;
    // cout<<ans;

    int ans = (c+(b)+a-1)%a;
    int res = ans==0 ? a : ans;
    cout<<res;
    return 0;
}