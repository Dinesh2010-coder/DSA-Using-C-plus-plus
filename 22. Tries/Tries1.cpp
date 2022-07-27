#include<iostream>

using namespace std; 

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for (int i = 0; i < 26; i++)
            {
                children[i]=NULL;
            }

            isTerminal = false;
            
        }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root, string word){
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return ;
        }

        // assumption word will be in caps
        int index = word[0] - 'A';
        TrieNode* child;

        // char is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // char is absent 
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursion
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root, string word){
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        
        int index = word[0]-'A';
        TrieNode* child;

        // char is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        // char is absent
        else
        {
            return false;
        }
        
        // Recursion
        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    bool empty(TrieNode* root){
        for(int i=0;i<26;i++){
            if(root->children[i]){
                return false;
            }
        }
        
        return true;
    }
    
    TrieNode* removeUtil(TrieNode* root, string word, int height = 0){
        if(!root){
            return NULL;
        }
        
        if(height == word.size()){
            if(root->isTerminal){
                root->isTerminal = false;
            }
            
            if(empty(root)){
                delete root;
                root=NULL;
            }
            
            return root;
        }
        
        int index = word[height] - 'A';
        root->children[index] = removeUtil(root->children[index],word,height+1);
        
        if(empty(root) && root->isTerminal == false){
            delete root;
            root = NULL;
        }
        
        return root;
    }
    
    TrieNode* removeWord(string word){
        return removeUtil(root,word);
    }

};

int main(){
    
    Trie *t = new Trie();

    t->insertWord("abcd");

    cout<<"Present or not : "<< t->searchWord("abcd") << endl;

    t->removeWord("abcd");
    cout<<"Present or not : "<< t->searchWord("abcd") << endl;
    
    return 0;
}