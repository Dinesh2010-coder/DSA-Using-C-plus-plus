#include<iostream>
#include<map>

using namespace std; 

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if (this->next!=NULL)
        {
            delete next;
            next = NULL;
        }

        cout<<"memory is free for node with data "<<value<<endl;
        
    }
};

void insertNode(Node* &tail,int element,int d){
    if (tail==NULL)
    {
        // empty list
        Node* temp = new Node(d);
        tail=temp;
        temp->next = temp;
        return;
    }

    else
    {
        // non-empty list
        // Assuming that the element is present in the list

        Node* curr = tail;
        while(curr->data != element)
        {
            curr=curr->next;
        }

        // element found -> curr is representing element wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
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
        // non-empty list
        // assuming that the element is present in the list

        Node* prev= tail;
        Node* curr = prev->next;

        while (curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }

        // for 1 Node LL
        if (curr==prev)
        {
            tail=NULL;
        }
        
        // for >= 2 Nodes LL
        else if (tail==curr)
        {
            tail=prev;
        }
        
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    
    
}

void print(Node* &tail){
    Node* temp=tail;

    if (tail==NULL)
    {
        // empty list
        cout<<"List is empty"<<endl;
        return;
    }
    
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail != temp);
    cout<<endl;
    
}

bool isCircularList(Node* head){
    // empty list
    if (head==NULL)
    {
        return true;
    }

    Node* temp = head->next;
    while (temp!= NULL && temp!=head)
    {
        temp=temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
    
    
}


int main(){
    
    Node* tail = NULL;

    // inserting element in empty list
    insertNode(tail,50,60);
    print(tail);

/*
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
*/
    /*
    deleteNode(tail,60);
    print(tail);
    */
   
    return 0;
}