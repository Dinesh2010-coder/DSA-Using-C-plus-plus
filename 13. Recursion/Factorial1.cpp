#include<iostream>

using namespace std; 

int factorial(int n){

    // base case
    if (n==0)
    {
        return 1;
    }

    // recursive relation
    int chotti = factorial(n-1);
    int badi = n*chotti;
    return badi;
    
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}