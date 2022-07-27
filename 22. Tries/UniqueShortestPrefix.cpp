/*
Given an array of words, find all shortest unique prefixes to represent each word in the given array. Assume that no word is prefix of another. 
Examples: 
 

Input: arr[] = {"zebra", "dog", "duck", "dove"}
Output: dog, dov, du, z
Explanation: dog => dog
             dove => dov 
             duck => du
             zebra => z

Input: arr[] =  {"geeksgeeks", "geeksquiz", "geeksforgeeks"};
Output: geeksf, geeksg, geeksq}
*/


#include<iostream>

using namespace std; 

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    int childCount;

    TrieNode(char ch){
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        isTerminal = false;
        childCount = 0;    
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        if(word.size()==0){
            root->isTerminal = true;
            return;
        }

        int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index]){
            child = root->children[index];
        }

        else{
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }

        return insertUtil(child,word.substr(1));
    }

    void insertWord(TrieNode* root, string word){
        insertUtil(root,word);
    }

    
};

int main(){
    
    return 0;
}