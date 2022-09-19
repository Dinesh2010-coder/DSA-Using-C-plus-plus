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

Node* mergeTwoLists(Node* first, Node* second) {
        Node* curr1 = first;
        Node* curr2 = second;
        
        if(!curr1){
            return curr2; 
        }
        
        if(!curr2){
            return curr1;
        }
        
        if(curr1->data < curr2->data){
            curr1->next = mergeTwoLists(curr1->next, curr2);
            return curr1;
        }
        else{
            curr2->next = mergeTwoLists(curr1,curr2->next);
            return curr2;
        }
    }

/*
Node* solve(Node* first, Node* second){
    if(first->next == NULL){
        first->next = second;
        return first;
    }
    
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node * curr2 = second;
    Node * next2 = curr2->next;
    while(next1 != NULL && curr2 != NULL){
        if(curr2->data>=curr1->data && curr2->data <= next1->data){
            // add node in between the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            
            // updating pointers
            curr1 = curr2;
            curr2 = next2;
        }
        
        else{
            // curr1 & next1 ko aage badhana padega
            curr1 = next1;
            next1 = next1->next;
            
            if(next1==NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    
    return first;
}
Node* sortTwoLists(Node* first, Node* second)
{
    // Write your code here.
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;
    Node * head = NULL;
    if(first->data <= second->data){
        head = solve(first,second);
    }
    else{
        head = solve(second, first);
    }
    
    return head;
}
*/

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    insert(head1,5);
    insert(head1,3);
    insert(head1,1);
    cout<<"LL1 : "<<endl;
    print(head1);

    insert(head2,5);
    insert(head2,4);
    insert(head2,2);
    cout<<"LL2 : "<<endl;
    print(head2);

    cout<<"Merged LL : "<<endl;
    // Node* head = sortTwoLists(head1, head2);
    Node* head = mergeTwoLists(head1,head2);
    print(head);
    return 0;
}