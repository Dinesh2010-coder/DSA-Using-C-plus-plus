#include<iostream>
#include<stack>

using namespace std; 

int main(){

    // creation of stack
    stack <int> s;           // empty stack created

    // push operation
    s.push(10);              // stack -->  10
    s.push(20);              // stack -->  10 20
    s.push(30);              // stack -->  10 20 30
    s.push(40);              // stack -->  10 20 30 40

    // pop operation     
    s.pop();                 // stack --> 10 20 30

    // top operation

    cout<<"Top element = "<<s.top()<<endl;              // 30

    // empty operation
    
    if(s.empty()){
        cout<<"Empty stack"<<endl;
    }              

    else{
        cout<<"Non-empty stack"<<endl;              
    }

    // stack operation
    cout<<"Size of stack = "<<s.size()<<endl;              // 3

    return 0;
}