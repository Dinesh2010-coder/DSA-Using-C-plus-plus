#include<iostream>

using namespace std; 

bool isSorted(int arr[], int n){
    if (n==0 || n==1)
    {
        return true;
    }

    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool ans = isSorted(arr+1,n-1);
        return ans;
    }
    
    
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

    bool ans = isSorted(arr,n);
    cout<<ans<<endl;
    return 0;
}