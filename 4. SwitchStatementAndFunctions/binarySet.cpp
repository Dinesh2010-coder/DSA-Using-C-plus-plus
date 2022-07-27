#include<iostream>
using namespace std;

int setBit(int n){
    int count = 0;
    while (n!=0)
    {
        if(n&1){
        count++;
        }
    n=n>>1;
    }
    
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Total no of set bits in "<<a<<" and "<<b<<" is "<<setBit(a)+setBit(b)<<endl;
    return 0;
}