#include<iostream>

using namespace std; 

int power(int x, int y){
    // base case
    if (y==0)
    {
        return 1;
    }

    if (y==1)
    {
        return x;
    }

    // Recursive call
    int ans = power(x,y/2);

    // y is even
    if (y%2==0)
    {
        return ans * ans;
    }

    else{
        return x*ans*ans;
    }
    
    
    
}

int main(){
    int x,y;
    cin>>x>>y;

    int ans = power(x,y);
    cout<<ans<<endl;
    return 0;
}