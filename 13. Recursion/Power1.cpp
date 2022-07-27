#include<iostream>

using namespace std; 

int power(int m,int n){
    if (n==0)
    {
        return 1;
    }

    return m*power(m,n-1);
    
}
int main(){
    int m,n;
    cout<<"Enter values of m and n : "<<endl;
    cin>>m>>n;
    int ans = power(m,n);
    cout<<ans<<endl;
    return 0;
}