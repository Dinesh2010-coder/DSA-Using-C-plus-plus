#include<iostream>
using namespace std;
int main(){
    int num = 1;
    char ch = '1';
    // char ch='a';
    // switch(num){
        switch(ch){
        case 1: 
            cout<<"First"<<endl;
            break;
        case '1': 
            switch (num)
            {
            case 1:
                cout<<"Value of num is "<<num<<endl;
                break;
            }
            // cout<<"Character One"<<endl;
            break;     
        default: cout<<"It is default case"<<endl;
    }
    return 0;
}