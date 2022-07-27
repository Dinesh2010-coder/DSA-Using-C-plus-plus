#include<iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    int c=a+b;
    for (int i = 1; i <n-1; i++)
    {
        c=a+b;
        
        a=b;
        b=c;
    }

    return c;
    
}
int main(){
    int n;
    cin>>n;
    cout<<n<<"th term is "<<fib(n)<<endl;
    return 0;
}