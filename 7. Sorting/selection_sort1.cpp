#include<iostream>
#include<limits.h>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
            
        }

        swap(arr[minIndex],arr[i]);
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

    selectionSort(arr,n);
    cout<<"Array after sorting : "<<endl;
    printArray(arr,n);

    return 0;
}