#include<iostream>
#include<limits.h>
using namespace std;

void input_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}

int arr_sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }

    return sum;
    
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;    
    int arr[n];
    
    input_array(arr,n);

    cout<<"Sum of elements of array is "<<arr_sum(arr,n)<<endl;
    return 0;
}