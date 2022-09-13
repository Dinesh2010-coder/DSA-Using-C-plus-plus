#include<iostream>

using namespace std; 

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = next;
    }
    
    ~Node(){
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        
    }
};

void insert(Node * &head , int d){
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node * &head){
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

void sort(Node* &head){
    Node * zeroHead = new Node(-1);
    Node * zeroTail = zeroHead;
    Node * oneHead = new Node(-1);
    Node * oneTail = oneHead;
    Node * twoHead = new Node(-1);
    Node * twoTail = twoHead;
    
    Node * curr = head;
    
//     create seperate list for 0,1,2
    while(curr!=NULL){
        if(curr->data == 0){
            insertAtTail(zeroTail, curr);
        }
        
        else if(curr->data == 1){
            insertAtTail(oneTail, curr);
        }
        
        else if(curr->data == 2){
            insertAtTail(twoTail, curr);
        }
        
        curr = curr->next;
    }
    
    // merge 3 LL
    
    // list is not empty
    if(oneHead -> next != NULL){
        zeroTail->next = oneHead->next;
    }
    // list is empty
    else{
        zeroTail->next = twoHead->next;
    }
    
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    
    // setup head
    head = zeroHead->next;
    
    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

/*
void sort(Node * &head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node * temp = head;
    while (temp!=NULL)
    {
        if(temp->data == 0)
            zeroCount++;
        else if(temp->data == 1)
            oneCount++;
        else if(temp->data == 2)
            twoCount++;
        temp = temp->next;
    }

    temp = head;
    while (temp!=NULL)
    {
        if (zeroCount!=0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount!=0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount!=0)
        {
            temp->data = 2;
            twoCount--;
        }

        temp = temp->next;
        
    }
    
    
}
*/

int main(){
    Node * head = NULL;
    insert(head, 2);
    insert(head, 1);
    insert(head, 2);
    insert(head, 0);
    insert(head, 1);
    print(head);

    sort(head);
    print(head);
    return 0;
}