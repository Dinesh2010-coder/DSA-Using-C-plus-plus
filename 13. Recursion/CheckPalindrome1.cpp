#include<iostream>

using namespace std; 

bool checkPalindrome(string& str,int i,int j){
    // base case
    if (i>j)
    {
        return true;
    }
    
    if (str[i]!=str[j])
    {
        return false;
    }

    else
    {
        i++;
        j--;
        checkPalindrome(str,i,j);
    }

    return true;
    
    
}

int main(){
    string str = "aabbccbbaa";
    bool ans = checkPalindrome(str,0,str.length()-1);
    if (ans)
    {
        cout<<"String is palindrome."<<endl;
    }

    else
    {
        cout<<"String is not palindrome."<<endl;
    }
    
    
    return 0;
}