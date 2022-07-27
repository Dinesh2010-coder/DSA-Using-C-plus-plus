#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){

        // Print spaces
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        
        // Print 2nd triangle
        int star=1;
        while(star<=i-1){
            cout<<"**";
            star++;
        }
        
        // Print 3rd triangle
        int k=n-i+1;
        while (k)
        {
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}