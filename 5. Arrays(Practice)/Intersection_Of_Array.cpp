#include<iostream>

int findIntersection(int arr1[],int n, int arr2[],int m){
    int i=0,j=0;
    int ans;
    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
        {
            ans=arr1[i];
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j]){
            i++;
        }

        else
        {
            j++;
        }
        
        
    }

    return ans;
    
}
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    cout<<"Intersection element is : "<<findIntersection(arr1,n,arr2,m)<<endl;
    return 0;
}