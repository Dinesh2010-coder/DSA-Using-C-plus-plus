#include<iostream>

using namespace std; 

int modularExponentiation(int x, int n, int m) {
	int res=1;
    while(n>0){
        if(n&1){
            //odd
            res = (1LL * res * (x)%m)%m;
        }
        x=(1LL * (x)%m * (x)%m)%m;
        n=n>>1;
    }
    
    return res;
}

int main(){
    int x,n,m;
    cout<<"Enter values of x,n and m : "<<endl;
    cin>>x>>n>>m;

    int ans = modularExponentiation(x,n,m);
    cout<<"Answer of ("<<x<<"^"<<n<<") % "<<m<<" is " << ans<<endl;
    return 0;
}