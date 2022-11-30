#include<iostream>
#include<limits.h>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int start=0;
    int end = n-1;
    int mid=start+((end-start)/2);

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }

        else if (arr[mid]<key)
        {
            start=mid+1;
        }

        else
        {
            end=mid-1;
        }

        mid=start+((end-start)/2);
        
    }

    return -1;
    
}
int main(){
    int evenSize[6] = {2,4,6,8,12,18};
    int oddSize[5] = {3,8,11,14,16};

    cout<<"Index of 12 is "<<binarySearch(evenSize,6,12)<<endl;

    cout<<"Index of 20 is "<<binarySearch(oddSize,5,20)<<endl;


    return 0;
}