#include<iostream>
#include<limits.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1

        bool swapp = false;
        for (int j = 0; j < n-i; j++)
        {
            // process element till (n-i)th index
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapp = true;
            }
            
        }

        if(swapp=false){
            // already sorted
            break;
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