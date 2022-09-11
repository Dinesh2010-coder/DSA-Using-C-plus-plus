#include<iostream>
#include<unordered_map>

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
        if(this->next!=NULL)
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

void uniqueSortedList(Node * &head){
    if (!head)
    {
        return ; 
    }

    unordered_map<int, bool> visited;
    Node* curr = head;
    visited[curr->data] = true;
    Node * prev = head;
    curr = curr->next;
    while (curr!=NULL)
    {
        if (visited[curr->data])
        {
            prev->next = curr->next;
            delete curr;
        }

        else
        {
            visited[curr->data] = true;
            prev = curr;
        }

        curr = curr->next;
   
    }

}

int main(){
    Node* head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,3);

    cout<< "LL before : "<<endl;
    print(head);
    uniqueSortedList(head);
    cout<< "LL after : "<<endl;
    print(head);
    return 0;
}