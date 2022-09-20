#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

    
        unordered_map<int,int> visited;

        for(int i=0;i<n;i++){
            visited[arr[i]]++;
        }

        for(auto i:visited){
            if (i.second != 3)
            {
                cout<<i.first<<endl;
            }
        
        }
    }
    
    
    
    return 0;
}