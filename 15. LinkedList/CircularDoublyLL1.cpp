#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL; 
    }

    ~Node(){
        int value = this->data;
        while (this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    if (tail==NULL)
    {
        // empty list
        Node* temp = new Node(d);
        tail=temp;
        temp->next=temp;
        temp->prev=temp;
        return;
    }

    else
    {
        // non-empty list
        // assuming that element is present in list

        Node* curr=tail;
        while (curr->data != element)
        {
            curr=curr->next;
        }

        // element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next->prev=temp;
        temp->prev=curr;
        curr->next=temp;
        
    }
    
    
}

void deleteNode(Node* &tail,int value){
    if (tail==NULL)
    {
        // empty list

        cout<<"Your list is empty "<<endl;
        return;
    }

    else
    {
        Node* before=tail;
        Node* curr=before->next;

        while (curr->data != value)
        {
            before=curr;
            curr=curr->next;
        }

        if (curr==before)
        {
            tail=NULL;
        }

        else if (tail==curr)
        {
            tail=before;
        }
        
        before->next=curr->next;
        curr->next->prev=before;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
        
    }
    
    
}
void print(Node* &tail){
    Node* temp=tail;
    if (tail==NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }

    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;
    
    // inserting element in empty list
    insertNode(tail,50,60);
    print(tail);

    insertNode(tail,60,80);
    print(tail);

    insertNode(tail,80,100);
    print(tail);

    insertNode(tail,100,150);
    print(tail);

    insertNode(tail,60,70);
    print(tail);

    insertNode(tail,80,90);
    print(tail);

    deleteNode(tail,90);
    print(tail);

    deleteNode(tail,60);
    print(tail);

    deleteNode(tail,100);
    print(tail);
    return 0;
}