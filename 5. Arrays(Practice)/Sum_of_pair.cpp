#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<vector<int>> pairSum (vector<int> &arr, int s){
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; i < arr.size(); i++)
        {
            if (arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
            
        }
        
    }

    sort(ans.begin(),ans.end());
    return ans;
    
    
    
}

int main(){
    int n,s;
    cin>>n>>s;
    vector<int> g1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        g1.push_back(arr[i]);
    }
    
    vector<vector<int>> ans = pairSum(g1,s);
    cout<<ans;

}