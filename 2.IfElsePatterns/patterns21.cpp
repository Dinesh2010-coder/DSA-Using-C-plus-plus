#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space = 1;
        int count=i;
        while(space<=i-1){
            cout<<" ";
            space++;
        }

        int j=n-i+1;
        while(j){
            cout<<count;
            count++;
            j--;
        }

        cout<<endl;
        i++;

    }
    return 0;
}