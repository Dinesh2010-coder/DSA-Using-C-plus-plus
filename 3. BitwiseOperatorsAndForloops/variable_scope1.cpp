#include<iostream>
using namespace std;
int main(){
    int a = 3;
    cout<<a<<endl;
    if(true){
        int a = 5;
        int b=10;
        cout<<a<<" "<<b<<endl;
    }

    cout<<a<<endl;
    int b=1;
    cout<<b<<endl;

    // int b=3;
    int i=8;
    for (int i = 0; i < 8; i++)
    {
        cout<<"HI"<<endl;
    }

    for (; i < 8; i++)
    {
        cout<<"HEY"<<endl;
    }
    
    return 0;
}