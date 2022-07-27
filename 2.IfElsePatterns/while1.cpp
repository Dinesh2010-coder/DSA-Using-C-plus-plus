#include<iostream>
using namespace std;
int main(){
    /*
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }

    */
    
    /*
    int n;
    cin>>n;
    int i=1,sum=0;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;

    */

    /*
    int n;
    cin>>n;
    int i=1,even=0,odd=0;
    while (i<=n)
    {
        if(i%2==0){
            even+=i;
        }

        else{
            odd+=i;
        }

        i++;
    }

    cout<<even <<" "<<odd<<endl;
    */

    /*
    int f,c;
    cin>>f;
    
    c=5*(f-32)/9;
    cout<<c<<" celsius"<<endl;
    */

    int n;
    cin>>n;
    int i=2;
    bool flag=false;
    while(i<n){
        if(n%i==0){
            flag=true;
        }
        
        i++;
    }

    if(flag){
        cout<<"Not prime"<<endl;
    }

    else
    {
        cout<<"Prime"<<endl;
    }
    
    return 0;
}