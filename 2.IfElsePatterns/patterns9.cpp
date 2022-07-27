#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1,count=i;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }

        cout<<endl;
        i++;
        
    }
    
}