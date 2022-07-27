#include<iostream>

using namespace std; 

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    // constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int val = this->data;
        if (this->next!=NULL)
        {
            delete next;
            next=NULL;
        }

        cout<<"memory is free for node with data "<<val<<endl;
        
    }
};

// traversing doubly linked list
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
    
}

// gives length of ll
int getLength(Node* &head){
    int len=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next;
    }

    return len;
    
}

void insertAtHead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtEnd(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* head, Node* tail, int position, int d){
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count=1;

    while (count<position-1)
    {
        count++;
        temp=temp->next;
    }

    if(temp->next == NULL){
        insertAtEnd(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
    
}

void deletionAtPosition(Node* &head, Node* &tail, int position){
    if (position==1)
    {
        Node* temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    else
    {
        Node* curr=head;
        Node* before=NULL;
        int count=1;

        while (count<position)
        {
            count++;
            before=curr;
            curr=curr->next;
        }

        if (curr->next==NULL)
        {
            curr->prev=NULL;
            before->next = curr->next;
            tail=before;
            delete curr;
            return;
        }

        curr->prev=NULL;
        before->next=curr->next;
        curr->next->prev=before;
        curr->next=NULL;
        delete curr;

    }
    
    
}

int main(){
    Node* node1=new Node(11);
    Node* head=node1;
    Node* tail=node1;

    print(head);
    cout<<getLength(head)<<endl;

    // Inserting new node
    insertAtHead(head,10);

    // Inserting new node
    insertAtEnd(tail,13);

    // Inserting new node
    insertAtPosition(head,tail,3,12);

    // Inserting new node
    insertAtEnd(tail,15);

    // Inserting new node
    insertAtEnd(tail,16);

    // Inserting new node
    insertAtEnd(tail,18);

    cout<<"Linked List after insertion is : "<<endl;
    print(head);

    // Deleting the node    
    deletionAtPosition(head,tail,1);

    // Deleting the node    
    deletionAtPosition(head,tail,6);
    
    // Deleting the node    
    deletionAtPosition(head,tail,4);
    
    cout<<"Linked List after deletion is : "<<endl;
    print(head);
    return 0;
}