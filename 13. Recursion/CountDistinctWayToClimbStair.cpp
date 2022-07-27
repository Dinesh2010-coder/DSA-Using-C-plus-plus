#include<iostream>

using namespace std; 

int countDistinctWayToClimbStair(long long n){
    // base case
    if (n<0){
        return 0;
    }
    if (n==0)
    {
        return 1;
    }
    
    int ans = countDistinctWayToClimbStair(n-1)+countDistinctWayToClimbStair(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int ans = countDistinctWayToClimbStair(n);
    cout<<ans<<endl;
    return 0;
}