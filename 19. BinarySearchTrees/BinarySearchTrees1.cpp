#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *root)
{ //  LNR
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{ //  NLR
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{ //  LRN
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level pura traverse ho chuka h
            cout << endl;

            if (!q.empty())
            {
                // queue still has child nodes
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
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
Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // right part mein insert krna h
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // left part mein insert krna h
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

Node *minValue(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

Node *maxValue(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

Node* deleteFromBST(Node* root, int val){
    // base case
    if (root==NULL)
    {
        return root;
    }

    // base case
    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        
        
        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        

        // 2 child

        
        // finding min of right subtree
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right) -> data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
        
        /*
        // finding max of left subtree
        if (root->left != NULL && root->right != NULL)
        {
            int maxi = maxValue(root->left) -> data;
            root->data = maxi;
            root->left = deleteFromBST(root->left,maxi);
            return root;
        }
        */
        

    }

    else if (root->data > val)
    {
        // left part mein jao
        root->left = deleteFromBST(root->left,val);
        return root;
    }

    else
    {
        // right part mein jao
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Printing BST : " << endl;
    levelOrderTraversal(root);
    // 10 8 21 7 27 5 4 3 -1

    cout << "Preorder Traversal : ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal : ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal : ";
    postorder(root);
    cout << endl;

    cout << "Min Value is : " << minValue(root)->data << endl;
    cout << "Max value is : " << maxValue(root)->data << endl;

    // DELETION

    // deleting leaf node
    // root = deleteFromBST(root,30);

    // deleting node with 1 child
    // root = deleteFromBST(root,90);

    // deleting node with 2 children
    root = deleteFromBST(root,50);
    
    cout << "Printing BST : " << endl;
    levelOrderTraversal(root);
    // 10 8 21 7 27 5 4 3 -1

    cout << "Preorder Traversal : ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal : ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal : ";
    postorder(root);
    cout << endl;

    cout << "Min Value is : " << minValue(root)->data << endl;
    cout << "Max value is : " << maxValue(root)->data << endl;

    // 50 20 70 10 30 90 110 -1
    return 0;
}