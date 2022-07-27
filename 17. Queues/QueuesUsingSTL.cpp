#include<iostream>
#include<queue>
using namespace std; 

int main(){

    // Create a queue
    queue<int> q;

    q.push(11);

    cout<<"Front element is : "<<q.front()<<endl;
    cout<<"Rear element is : "<<q.back()<<endl;

    q.push(12);
    cout<<"Rear element is : "<<q.back()<<endl;

    q.push(13);
    cout<<"Rear element is : "<<q.back()<<endl;

    q.push(14);
    cout<<"Rear element is : "<<q.back()<<endl;

    q.push(15);

    cout<<"Front element is : "<<q.front()<<endl;
    cout<<"Rear element is : "<<q.back()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();

    cout<<"Size of queue is : "<<q.size()<<endl;

    cout<<"Front element is : "<<q.front()<<endl;
    cout<<"Rear element is : "<<q.back()<<endl;

    if (q.empty())
    {
        cout<<"Queue is Empty"<<endl;
    }

    else{
        cout<<"Queue is Not Empty"<<endl;
    }
       
    return 0;
}