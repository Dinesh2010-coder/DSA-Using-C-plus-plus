#include <bits/stdc++.h>
#include<vector>

using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> arr1;
        vector<int> arr2;

        int s1 = 0, s2=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=x){
                arr1.push_back(arr[i]);
            }
            else{
                arr2.push_back(arr[i]);
            }
        }

        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());

        cout<<"Smaller Element Array : "<<endl;
        for (int i = 0; i < arr1.size() ;i++)
        {
            cout<<arr1[i]<<" ";
        }cout<<endl;
        

        cout<<"Bigger Element Array : "<<endl;
        for (int i = 0; i < arr2.size() ;i++)
        {
            cout<<arr2[i]<<" ";
        }cout<<endl;
        
    }
    return 0;
}