#include<iostream>
#include<limits.h>
using namespace std;

void update(int arr[], int n){
    
    cout<<"Inside the function"<<endl;

    // updating array's first element
    arr[0] = 123;

    // printing the array 
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Going back to main function"<<endl;
}


int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    
    // printing the array 
    cout<<"Printing in main function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}