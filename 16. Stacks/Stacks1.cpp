#include<iostream>

using namespace std; 

class Stack{
    // properties
    public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }

        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }

        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if (top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack Empty"<<endl;
            return -1;
        }
        
    }

    bool empty(){
        if(top == -1){
            return true;
        }

        else{
            return false;
        }
    }
};

int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    cout<<s.peek()<<endl;

    if(s.empty()){
        cout<<"Stack empty"<<endl;
    }

    else{
        cout<<"Stack not empty"<<endl;
    }

    s.push(40);
    s.push(50);
    s.push(60);   // stack overflow as size-top is not greater than equal to -1
    return 0;
}