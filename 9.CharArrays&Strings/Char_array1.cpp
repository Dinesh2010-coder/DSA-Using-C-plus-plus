#include<iostream>
#include<limits.h>
using namespace std;

char toLowerCase(char ch){
    if ((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        return ch;
    }

    else
    {
        int temp = ch - 'A' + 'a';
        return temp;
    }
    
    
}

bool checkPalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (toLowerCase(name[s])!=toLowerCase(name[e]))
        {
            return 0;
        }

        else
        {
            s++;
            e--;
        }
        
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}

int getLength(char name[]){
    int count=0;
    for (int i = 0; i < name[i]!='\0'; i++)
    {
        count++;
    }

    return count;
    
}
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    int len = getLength(name);
    cout<<"Length : "<<len<<endl;
    reverse(name,len);
    cout<<"Your name is "<<name<<endl;
    cout<<"Palindrome or not : "<<checkPalindrome(name,len)<<endl;
    cout<<"Character is "<<toLowerCase('b')<<endl;
    cout<<"Character is "<<toLowerCase('C')<<endl;
    return 0;
}