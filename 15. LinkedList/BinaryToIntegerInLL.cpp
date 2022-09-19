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
};

void push(Node* &head, int d){
    
    // create a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

int getDecimalValue(Node* head) {
        int rem=0;
        Node* curr = head;
        while(curr!=NULL){
            rem=rem*2+curr->data;
            curr = curr->next;
        }
        
        return rem;
}

int main(){
    Node* head = NULL;
    push(head,1);
    push(head,0);
    push(head,1);

    int ans =  getDecimalValue(head);   
    cout<<ans<<endl;
    return 0;
}