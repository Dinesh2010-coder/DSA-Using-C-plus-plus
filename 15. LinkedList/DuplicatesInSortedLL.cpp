#include<iostream>

using namespace std; 

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        while (this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* uniqueSortedList(Node * head){
    if (!head)
    {
        return NULL; 
    }

    Node* curr = head;
    while (curr!=NULL)
    {
        if ((curr->next!=NULL) && curr->data == curr->next->data)
        {
            Node * ptr = curr->next->next;
            Node * temp = curr->next;

            curr->next = ptr;
            delete (temp);
        }
        else
        {
            curr = curr->next;
        }
        
        
    }

    return head;
}

int main(){
    Node* head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,1);

    cout<< "LL before : "<<endl;
    print(head);
    Node * head2 = uniqueSortedList(head);
    cout<< "LL after : "<<endl;
    print(head2);
    return 0;
}