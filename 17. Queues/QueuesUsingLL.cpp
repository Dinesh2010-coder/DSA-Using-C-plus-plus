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
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        
    }
};

void enqueue(Node* &qfront,Node* &rear, int d){
    Node* temp = new Node(d);
    if (qfront==NULL)
    {
        qfront = temp;
        rear = temp;
        return;
    }
    
    rear->next = temp;
    rear = temp;
}

int dequeue(Node* &qfront,Node* &rear){
    if (qfront==NULL)
    {
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    
    Node* temp = qfront;
    qfront = qfront->next;

    if (qfront == rear)
    {
        qfront = rear = NULL;
    }
    
    temp->next = NULL;
    return temp->data;
    
       
}

bool isEmpty(Node* &qfront,Node* &rear){
    if (qfront == NULL)
    {
        return true;
    }

    else
    {
        return false;
    }
    
    
}

int front(Node* &qfront, Node* &rear){
    if (isEmpty(qfront,rear))
    {
        return -1;
    }

    else
    {
        return qfront->data;
    }
    
    
}

int back(Node* &qfront, Node* &rear){
    if (isEmpty(qfront,rear))
    {
        return -1;
    }

    else
    {
        return rear->data;
    }
    
    
}


int main(){
    /*
    Node* node1 = new Node(11);
    Node* qfront = node1;
    Node* rear = node1;
    cout<<"rear is : "<<back(qfront,rear)<<endl;
    */
    
    Node* qfront = NULL;
    Node* rear = NULL;

    enqueue(qfront,rear,11);
    cout<<"front is : "<<front(qfront,rear)<<endl;
    cout<<"rear is : "<<back(qfront,rear)<<endl;

    
    enqueue(qfront,rear,12);
    cout<<"front is : "<<front(qfront,rear)<<endl;
    cout<<"rear is : "<<back(qfront,rear)<<endl;

    
    enqueue(qfront,rear,13);
    cout<<"front is : "<<front(qfront,rear)<<endl;
    cout<<"rear is : "<<back(qfront,rear)<<endl;

    
    if(isEmpty(qfront,rear))
    {
        cout<<"Queue is Empty"<<endl;
    }

    else
    {
        cout<<"Queue is Not Empty"<<endl;
    }
    
    
   
    cout<<"After dequeuing : "<<endl;
    cout<<dequeue(qfront,rear)<<endl;
    cout<<"front is : "<<front(qfront,rear)<<endl;
    cout<<"rear is : "<<back(qfront,rear)<<endl;
    
    return 0;
}