#include<iostream>
using namespace std;
int main(){
    /*
    int n;
    cin>>n;
    if(n>0){
        cout<<"N is positive"<<endl;
    }

    else{
        cout<<"N is negative"<<endl;
    }
    */
    
    
    /*
    a=cin.get();
    // a='1' -> 49  ASCII
    */

    /*
    int a,b;

    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<"A is greater"<<endl;
    }    
    if(b>a){
        cout<<"B is greater"<<endl;
    }

    */
    /*
    int a ;
    cout<<" enter the value of a "<<endl;
    cin>>a;



    if(a>0) {
        cout<<" A is positive"<< endl;
    }
    else if(a<0) {
        cout<<" A is negative"<<endl;
    }
    else {
        cout<<" A is 0"<<endl;
    }

    */
    
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase"<<endl;
    }

    else if (ch>='A' && ch<='Z')
    {
        cout<<"Uppercase"<<endl;
    }

    else if(ch>='0' && ch<='9'){
        cout<<"Numeric"<<endl;
    }
    
    return 0;
}