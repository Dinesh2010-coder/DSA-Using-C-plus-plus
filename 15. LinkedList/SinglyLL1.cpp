#include<iostream>

using namespace std; 

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;

            // memory free
            this->next=NULL;
        }

        cout<<"memory is free for node with data "<<value<<endl;
        
    }
};

void insertAtHead(Node* &head, int d){
    
    // create a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int d){

    // create a new node
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position , int d){

    // insert at start
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }
    

    Node* temp = head;
    int count=1;

    while (count<position-1)
    {
        temp = temp->next;
        count++;
    }


    // insert at Last Position
    if (temp->next==NULL)
    {
        insertAtEnd(tail,d);
        return;
    }
    
    // create a new node

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}

void deletionAtPosition(Node* &head,Node* &tail,int position){
    if (position==1)
    {
        // deletion from start
        Node* temp=head;
        head=head->next;
        
        // free memory of temp  
        temp->next=NULL;
        delete temp;
        return;
    }

    else
    {
        Node* curr = head;
        Node* prev=NULL;
        int count=1;
        while (count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            prev->next=curr->next;
            delete curr;
            tail=prev;
            return;
        }
        
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

void deleteByValue(Node* &head, Node* &tail, int value){
    if (value == head->data)
    {
        Node* temp = head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }

    else
    {
        Node* curr=head;
        Node* prev=NULL;
        while (curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }

        if(curr->next == NULL){
            prev->next=curr->next;
            delete curr;
            tail=prev;
            return;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    
    
}

void reverse(Node *head){
    if (head==NULL || head->next==NULL)
    {
        cout<< head<<endl;
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
}

// traversing singly linked list
void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout<<endl;
    
}

int main(){

    // creating a new Linked List
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // assigning head and tail
    Node* head = node1;
    Node* tail=node1;

    cout<<"Linked List before insertion is : "<<endl; 
    print(head);

    // Inserting new node
    insertAtHead(head,8);

    // Inserting new node
    insertAtEnd(tail,20);

    // Inserting new node
    insertAtPosition(head,tail,4,15);

    cout<<"Linked List after insertion is : "<<endl;
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

    // Deleting node
    deletionAtPosition(head,tail,4);

    cout<<"Linked List after deletion is : "<<endl;
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

    // Deleting node
    deleteByValue(head,tail,20);

    cout<<"Linked List after deletion is : "<<endl;
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

    return 0;
}