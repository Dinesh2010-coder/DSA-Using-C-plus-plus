#include<iostream>
#include<limits.h>

using namespace std; 

int col;

bool isPresent(int arr[][4], int target,int row,int col){
   
    for (int row=0;row<3;row++){
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col]==target){
                return 1;
            }
        }
        
    }

    return 0;
}

// to print row wise sum
void printRowSum(int arr[][4],int row,int col){
    cout<<"Printing Row sum : "<<endl;
    for (int row = 0; row <3; row++)
    {
        int sum=0;
        for(int col = 0;col<4;col++){
            sum+=arr[row][col];
        }

        cout<<sum<<" ";
    }

    cout<<endl;
    
}

// to print col wise sum
void printColSum(int arr[][4],int row,int col){
    cout<<"Printing Col Sum : "<<endl;
    for (int col = 0; col <4; col++)
    {
        int sum=0;
        for(int row = 0;row<3;row++){
            sum+=arr[row][col];
        }

        cout<<sum<<" ";
    }
    cout<<endl;
    
}

int largestRowSum(int arr[][4],int row, int col){
    int maxi = INT_MIN;
    int rowIndex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }

        if (sum > maxi)
        {
            maxi=sum;
            rowIndex=row;
        }
        
    }

    cout<<"the maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){
    // create a 2D array
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}}
    int arr[3][4];


    // taking input  ----->  row wise input
    for (int row=0;row<3;row++){
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
        
    }

/*
    // taking input  ----->  col wise input
    for (int col=0;col<4;col++){
        for (int row = 0; row < 3; row++)
        {
            cin>>arr[row][col];
        }
        
    }
*/

    // print 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

/*
    int target;
    cout<<"Enter the element you want to search : "<<endl;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout <<"Element found "<<endl;
    }

    else{
        cout<<"Not Found"<<endl;
    }
*/

    printRowSum(arr,3,4);
    printColSum(arr,3,4);

    int ans = largestRowSum(arr,3,4);
    cout<<"Maximum row is at Index : "<<ans<<endl;
    return 0;
}