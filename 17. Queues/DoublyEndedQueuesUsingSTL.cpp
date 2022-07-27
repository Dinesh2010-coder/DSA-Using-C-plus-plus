#include<iostream>
#include<queue>
using namespace std; 

int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(14);

    cout<<"Front is : "<<d.front()<<endl;
    cout<<"Rear is : "<<d.back()<<endl;

    d.pop_front();
    cout<<"Front is : "<<d.front()<<endl;
    cout<<"Rear is : "<<d.back()<<endl;

    d.pop_back();

    if (d.empty()){
        cout<<"Queue is Empty"<<endl;
    }

    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    
    return 0;
}