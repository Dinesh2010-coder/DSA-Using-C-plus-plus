#include<iostream>

using namespace std; 

void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}
int main(){
    
    /*
    int i=5;
    
    // create a reference variable
    int& j = i;
    cout<<"i = "<<i<<endl;
    i++;
    cout<<"i = "<<i<<endl;
    j++;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    */
   
    int n=5;
    cout<<n<<endl;
    update1(n);
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
    return 0;
}