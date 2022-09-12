#include <iostream>
#include<math.h>

using namespace std;
/*
void primeFactors(int n){
    int i=2;
    while(n>1){
        if(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        else{
            i++;
        }
    }
}
*/

void primeFactors(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
        int count = 0;
            while (n%i==0)
            {
                count++;
                n = n/i;
            }
            cout<<i<<"^" <<count<<endl;
            
        }
        
    }
    if(n>1){
        cout<<n<<"^"<<1<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    primeFactors(n);
    
    return 0;
}
