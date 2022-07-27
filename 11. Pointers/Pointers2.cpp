#include<iostream>

using namespace std; 

int main(){
    /*
    int i=5;
    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
    */
    
    int num=5;
    int a=num;
    cout<<"a before "<<num<<endl;
    a++;
    cout<<"a after " <<num<<endl;

    int *p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after " <<num<<endl;

    // copying the pointer
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    // important concept
    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"t before "<<t<<endl;
    t=t+1;
    cout<<"t after "<<t<<endl;
    return 0;
}