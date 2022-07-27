#include<iostream>
#include<queue>

using namespace std; 

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildFromLevelOrderTraversal(Node* &root){
    queue<Node*> q;
    cout << "Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        
        int leftData,rightData;
        
        cout<<"Enter left node for : "<< temp->data <<endl;
        cin>>leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for : "<< temp->data <<endl;
        cin>>rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
        
        
    }
    
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka h
            cout<<endl;
            if(!q.empty()){
                // queue still has child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout<< temp->data <<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }    
    }   
}

int main(){
    Node* root = NULL;
    buildFromLevelOrderTraversal(root);
    levelOrderTraversal(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
}