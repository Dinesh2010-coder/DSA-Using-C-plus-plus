#include<iostream>

using namespace std; 

int sum(int arr[],int n){
    if (n==0)
    {
        return 0;
    }

    return arr[0]+sum(arr+1,n-1);
    
}
int main(){
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter values in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = sum(arr,n);
    cout<<ans<<endl;
    return 0;
}