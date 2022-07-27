#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(int arr[],int n ){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }

    for (int i = 0; i < n ;i++)
    {
        ans=ans^i;
    }

    return ans;
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Duplicate value in array is "<<findDuplicate(arr,n);
    return 0;
}