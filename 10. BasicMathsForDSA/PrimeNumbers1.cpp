#include<iostream>
#include<vector>

using namespace std; 

// Sieve of Eratosthenes

int countPrimes(int n) {
    int cnt=0;
        
    vector<bool> prime(n+1,true);
        
    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=0;
            }
        }
    }
    return cnt;
        
}

/*
bool isPrime(int n){

    if (n<=1)
    {
        return false;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }

    return true;
    
}
int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
*/

int main(){
    int n;
    cin>>n;
    int count = countPrimes(n);
    cout<<count<<endl;
}