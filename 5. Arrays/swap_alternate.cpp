#include<iostream>
#include<limits.h>
using namespace std;

void swap_alternate(int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    
    
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,3,6,9,4};
    
    swap_alternate(arr,6);
    swap_alternate(brr,5);

    printArray(arr,6);
    printArray(brr,5);
    
    return 0;
}