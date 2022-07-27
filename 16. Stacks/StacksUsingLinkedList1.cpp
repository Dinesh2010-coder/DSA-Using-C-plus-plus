#include<iostream>

using namespace std; 

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            delete next;

            this->next = NULL;
        }
    }
};

void print(Node* &top){
    if (top==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    

    Node* temp = top;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
    
}


void push(Node* &top,int d){
    Node* temp = new Node(d);
    temp->next = top;
    top=temp;
}

void pop(Node* &top){
    if (top==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    
    Node* temp = top;
    top = top->next;
    temp->next = NULL;
    delete temp;
}

int peek(Node* &top){
    if(top==NULL){
        return -1;
    }

    else
    {
        return top->data;
    }
    
}

bool empty(Node* &top){
    if(top==NULL){
        return true;
    }

    else
    {
        return false;
    }
    
}


int main(){
    Node* top = NULL;

    push(top,5);
    push(top,10);
    push(top,15);
    push(top,20);
    print(top);

    pop(top);
    print(top);

    cout<<"Top element is "<<peek(top)<<endl;

    if (empty(top))
    {
        cout<<"Stack is Empty"<<endl;
    }

    else
    {
        cout<<"Stack is not Empty"<<endl;
    }
    
    
    return 0;
}