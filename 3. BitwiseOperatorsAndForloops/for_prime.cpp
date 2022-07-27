#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n "<<endl;
    cin>>n;
    bool flag = true;
    for (int i = 2; i <= n-1; i++)
    {
        if(n%i==0){
            flag = false;
            break;
        }

    }

    if (flag)
    {
        cout<<"Prime No"<<endl;
    }

    else
    {
        cout<<"Not Prime"<<endl;
    }
    
    


    
    return 0;
}
