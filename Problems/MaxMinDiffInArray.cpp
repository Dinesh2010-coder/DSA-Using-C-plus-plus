#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){
    int n,k;
    cin>>n>>k;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }

        if (min>arr[i])
        {
            min = arr[i];
        }

        int diff = max-min;

    }
        cout<<max<<" "<<min<<endl;
    
    for (int i = 0; i < n; i++)
    {
        int ans = arr[i]-k;
        if (ans<0)
        {
            arr[i] = arr[i]+k;
        }
        else{
            arr[i] = arr[i]-k;
        }

        cout<<arr[i]<<" ";
        
    }cout<<endl;

    int maxi = arr[0];
    int mini = arr[0];
    int diff1 = 0;
    for (int i = 0; i < n; i++)
    {
        if(maxi<arr[i]){
            maxi = arr[i];
        }

        if (mini>arr[i])
        {
            mini = arr[i];
        }

        diff1 = maxi-mini;

    }
    cout<<maxi<<" "<<mini<<endl;
    cout<<diff1<<endl;
    
    
    return 0;
}