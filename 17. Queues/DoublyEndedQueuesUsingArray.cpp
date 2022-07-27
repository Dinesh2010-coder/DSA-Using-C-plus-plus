#include<iostream>

using namespace std; 
class Deque{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    Deque(int n){
        size=n;
        arr=new int[size];
        front = rear = -1;
    }

    bool push_front(int value){
        if((front == 0 && rear == size-1) || (front != size-1 && rear == (front-1)%(size-1))){
            return false;
        }

        else if (front == -1)
        {
            front = rear = 0;
        }

        else if(front == 0 && rear != size-1){
            front = size-1;
        }

        else
        {
            front--;
        }

        arr[front] = value;
        return true;
    }

    bool push_back(int value){
        if((front == 0 && rear == size-1) || (front != size-1 && rear == (front-1)%(size-1))){
            return false;
        }

        else if (front == -1)
        {
            front = rear = 0;
        }

        else if(front != 0 && rear == size-1){
            rear = 0;
        }

        else
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int pop_front(){
        if(front == -1){
            return false;
        }

        int ans = arr[front];
        arr[front] = -1;
        if(front == 0){
            front = rear = -1;
        }
        else if (front == size-1)
        {
            front = 0;
        }

        else
        {
            front++;
        }
        
        return ans;
    }

    int pop_back(){
        if(front == -1){
            return false;
        }

        int ans = arr[rear];
        arr[rear] = -1;
        if(front == 0){
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size-1;
        }

        else
        {
            rear--;
        }
        
        return ans;
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main(){
    Deque d(2);
    d.push_front(12);
    d.push_back(14);
    d.pop_front();
    d.pop_back();
    return 0;
}