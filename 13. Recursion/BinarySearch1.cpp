#include<iostream>

using namespace std; 

int binarySearch(int arr[], int s, int e, int key){
    // base case
    if (s>=e){
        return 0;
    }

    int mid = (s+e)/2;

    

    if (arr[mid]==key)
    {
        return mid;
    }
    

    if (arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }
    
    
    else{
        return binarySearch(arr,s,mid,key);
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

    int s = 0;
    int e = n-1;

    cout<<"Enter key element : "<<endl;
    cin>>key;

    int ans = binarySearch(arr,s,e,key);
    
    if(ans){
        cout<<"Ans Found "<<endl;
    }

    else{
        cout<<"Not";

    }

    return 0;
}