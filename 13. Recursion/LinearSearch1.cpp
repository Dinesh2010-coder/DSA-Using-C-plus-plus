#include<iostream>

using namespace std; 

bool linearSearch(int arr[], int n, int key){
    if (n==0)
    {
        return false;
    }

    if (arr[0]==key)
    {
        return true;
    }

    else
    {
        bool ans = linearSearch(arr+1,n-1,key);
        return ans;
    }
    
    
    
}
int main(){
    int n,key;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter values in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter key element : "<<endl;
    cin>>key;

    bool ans = linearSearch(arr,n,key);
    if (ans)
    {
        cout<<key<<" is present."<<endl;
    }
    else
    {
        cout<<key<<" is not present."<<endl;
    }
    
    
    return 0;
}