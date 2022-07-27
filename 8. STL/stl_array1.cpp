#include<iostream>
#include<array>

using namespace std;

int main(){
    int n;
    cin>>n;
    array<int,4> arr={1,2,3,4};
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
       
    cout<<endl;

    cout<<"Element at 2nd index "<<arr.at(2)<<endl;
    cout<<"Empty or not empty "<<arr.empty()<<endl;
    cout<<"First element is "<<arr.front()<<endl;
    cout<<"Last element is "<<arr.back()<<endl;
    return 0;
}