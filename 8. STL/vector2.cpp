#include<iostream>
#include<vector>

using namespace std;

int main(){

    // here 5 is size of vector and saare elements ko 1 se initialize krde
    vector<int> a(5,1);

    cout<<"Print a : "<<endl;
    for (int i:a){
        cout<<i<<" ";
    }cout<<endl;

    // this will create a new vector last which will copy vector a 
    vector<int> last(a);

    cout<<"Print last : "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    return 0;

}
