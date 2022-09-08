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

int getLength(Node* &head){
    Node* temp = head;
    int count = 1;
    while (temp!=NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

Node* reverseKGrp(Node* head, int k){
    if (head == NULL)
    {
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;
    int len = getLength(head);
    while (curr!=NULL && count<k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    /*
    // If no of nodes is not a multiple of k then left-out nodes in the end should remain as it is 
    if (forward!=NULL)
    {
        if ((len-count)>=k)
        {
            head->next = reverseKGrp(forward,k);
        }
        else
        {
            head->next = forward;
        }

    }
    */

    // Normal Case, reverse left over elements in k groups
    if (forward!=NULL)
    {
        head->next = reverseKGrp(forward,k);
    }
    
    return prev;    
}

int main(){
    Node* head = NULL;   
    insertAtHead(head, 6); 
    insertAtHead(head, 5); 
    insertAtHead(head, 4); 
    insertAtHead(head, 3); 
    insertAtHead(head, 2); 
    insertAtHead(head, 1); 

    print(head);
    int k=2;

    Node* revHead = reverseKGrp(head, k);

    print(revHead);

    return 0;
}

// T.C. = O(n), S.C. = O(n)