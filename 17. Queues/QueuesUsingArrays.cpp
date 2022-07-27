#include<iostream>

using namespace std; 

class Queue{
    int* arr;
    int qfront;
    int rear;
    int size;

    public:
    Queue(){
        size=10001;
        arr = new int[size];
        qfront = rear = 0;
    }

    void enqueue(int data){
        if(rear==size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(qfront == rear){
            return -1;
        }

        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront=rear=0;
            }
            return ans;
        }
        
    }

    int front(){
        if (qfront == rear)
        {
            return -1;
        }

        else
        {
            return arr[qfront];
        }
    }

    bool isEmpty(){
        if (qfront == rear)
        {
            return true;
        }

        else
        {
            return false;
        }
        
        
    }
};

int main(){
    Queue q;
    
    q.enqueue(11);

    cout<<"Front element is : "<<q.front()<<endl;

    q.enqueue(12);

    q.enqueue(13);

    q.enqueue(14);

    q.enqueue(15);

    cout<<"Front element is : "<<q.front()<<endl;

    q.dequeue();

    cout<<"Front element is : "<<q.front()<<endl;

    if (q.isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }

    else{
        cout<<"Queue is Not Empty"<<endl;
    }
    return 0;
}