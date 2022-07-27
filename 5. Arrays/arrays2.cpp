#include<iostream>
#include<limits.h>
using namespace std;

void input_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}

int getMin(int arr[],int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }

    return min;
    
}

int getMax(int arr[],int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }

    return max;
    
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;    
    int arr[n];
    
    input_array(arr,n);

    cout<<"Min value is "<<getMin(arr,n)<<endl;

    cout<<"Max value is "<<getMax(arr,n)<<endl;

    return 0;
}
