#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

/*
// Approach 1
int getLength(Node* head){
	Node* temp = head;
	int count = 1;
	while(temp->next != NULL){
		temp=temp->next;
		count++;
	}
	
	return count;
}
Node *findMiddle(Node *head) {
    // Write your code here
	int mid;
	int length = getLength(head);
	mid = (length/2);
	
	Node* temp = head;
	int cnt = 0;
	while(cnt<mid){
		temp = temp->next;
		cnt++;
	}
	
	return temp;
}
*/

/*
// Approach 2
Node* getMiddle(Node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	Node* slow = head;
	Node* fast = head->next;
	
	while(fast != NULL){
		fast = fast->next;
		if(fast!=NULL){
			fast = fast->next;
		}
		
		slow = slow->next;
	}
	
	return slow;
}
Node *findMiddle(Node *head) {
    // Write your code here
	return getMiddle(head);
}
*/