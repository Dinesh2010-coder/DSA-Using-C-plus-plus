#include<iostream>

using namespace std; 

class CircularQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (front!=0 && rear == (front-1)%(size-1))){    // queue is full
            return false;
        }

        else if (front == -1)      // queue is empty
        {
            front = rear = 0;
        }

        else if (rear == size-1 && front!=0)       // front is before rear and rear is pointing to last element
        {
            rear = 0;
        }
        
        else      // normal case
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int dequeue(){
        if (front==-1)     // queue is empty
        {
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)    // single element is present in queue
        {
            front = rear = -1;
        }

        else if (front == size-1)    // front is pointing to last element
        {
            front = 0;
        }

        else     // normal case
        {
            front++;
        }

        return ans; 
    }
};

int main(){
    CircularQueue cq(5);
    cout<<cq.enqueue(10)<<endl;
    cout<<cq.enqueue(11)<<endl;
    cout<<cq.enqueue(12)<<endl;
    cout<<cq.enqueue(13)<<endl;
    cout<<cq.enqueue(14)<<endl;
    cout<<cq.enqueue(15)<<endl;
    return 0;
}