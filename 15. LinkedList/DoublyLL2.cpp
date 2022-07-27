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

void insertAtHead(Node* &head,Node* &tail, int d){
    
    // empty list
    if (head==NULL)
    {
        Node* temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
    
}

void insertAtEnd(Node* &head,Node* &tail, int d){
    if (tail==NULL)
    {
        Node* temp = new Node(d);
        tail=temp;
        head=temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    
    
}

void insertAtPosition(Node* head, Node* tail, int position, int d){
    if (position==1)
    {
        insertAtHead(head,tail,d);
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
        insertAtEnd(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
    
}

int main(){
   
    Node* head=NULL;
    Node* tail=NULL;

    print(head);
    cout<<getLength(head)<<endl;

    // Inserting new node
    insertAtHead(head,tail,10);

    // Inserting new node
    insertAtEnd(head,tail,13);

    // Inserting new node
    insertAtPosition(head,tail,2,12);

    cout<<"Linked List after insertion is : "<<endl;
    print(head);
    return 0;
}