#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int star = n-i+1;
        while(star){
            cout<<"*";
            star--;
        }


        cout<<endl;
        i++;
    }
    return 0;
}