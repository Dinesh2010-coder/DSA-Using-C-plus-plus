#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){

    // declare
    int num[15];

    //accessing an array
    cout<<"Value at 14 index "<<num[14]<<endl;
    // cout<<"Value at 20 index "<<num[20]<<endl;

    // initialising an array
    int second[3]={5,7,12};

    // accessing an element
    cout<<"Value at 2 index "<<second[2]<<endl;

    int third[15]={2,7};
    printArray(third,15);
    

    // initialising all locations with 0
    int fourth[10]={0};
    printArray(fourth,10);


    // initialising all locations with 1
    /*
    int fifth[10]={1};

    printArray(fifth,10);

    */
    int fifth[10];

    for (int i = 0; i < 10; i++)
    {
        fifth[i]=1;
        cout<<fifth[i]<<" ";
    }

    cout<<endl;

    char ch[5]={'a','b','c','d','e'};
    for (int i = 0; i <5 ; i++)
    {
        cout<<ch[i]<<" ";
    }

    cout<<endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[8];

    
    return 0;
}