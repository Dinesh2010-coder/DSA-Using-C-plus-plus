#include<iostream>
#include<limits.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}

void input_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;    
    int arr[n];
    
    input_array(arr,n);
    cout<<"Array before sorting : "<<endl;
    printArray(arr,n);

    bubbleSort(arr,n);
    cout<<"Array after sorting : "<<endl;
    printArray(arr,n);
    return 0;
}