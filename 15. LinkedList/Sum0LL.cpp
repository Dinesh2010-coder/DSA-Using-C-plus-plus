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
        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        
    }
};

void insertAtHead(Node* &head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node * &head){
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

void sumZero(Node * &head){
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        if (head->data == 0)
        {
            head = NULL;
            return;
        }
        return;
    }
    
    
    Node* temp = head;
    Node * curr = head;
    Node * prevTemp = NULL;
    Node * prevCurr = NULL;

    while (temp!=NULL)
    {
        while (curr!=NULL)
        {
            if ((temp->data + curr->data) == 0)
            {
                prevCurr->next = curr->next;
                curr->next = NULL;
                delete curr;
                
                prevTemp->next = temp->next;
                temp->next = NULL;
                delete temp;
                return;
            }

            prevCurr = curr;
            curr = curr->next;
            
        }

        prevTemp = temp;
        temp = temp->next;
        
    }
    
}

int main(){
    Node * head = NULL;
    insertAtHead(head,4);
    insertAtHead(head,-3);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print(head);

    sumZero(head);

    print(head);

    return 0;
}