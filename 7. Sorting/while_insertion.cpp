#include<iostream>
#include<limits.h>
using namespace std;

void insertionSort(int arr[],int n){
    
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        
        int j=i-1;

        while (j>=0)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }

            else
            {
                break;
            }
            
            j--;
            
        }
        
        arr[j+1] = temp;
        
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

    insertionSort(arr,n);
    cout<<"Array after sorting : "<<endl;
    printArray(arr,n);
    return 0;
}