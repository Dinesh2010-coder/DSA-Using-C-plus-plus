#include<iostream>
#include<utility>
#include<vector>

using namespace std; 

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
	p.first = firstOcc(arr,n,k);
	p.second = lastOcc(arr,n,k);
	
	return p;
}