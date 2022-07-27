#include<iostream>
#include<vector>

using namespace std;

int main(){

    /*
    // Vector is a dynamic array
    dynamic array means that jaise hi vector ka size bhar jaata h i.e. vector size 4 h and jaise hum 5th element daalne ka try krenge 
    us case mein kya hoga ye vector apna size double krlega.
    // Ye kaise possible h?
    ye ek aur naya vector bnaega is vector ke double size ka, naye vector ke andar purane vector ke elements copy krdega and purane wale vector
    ko dumb krdega 
    */
   
    vector<int> v;

    // Capacity matlb kitne elements vector mein daal skte h
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;


    // jab humne isme 2 daala tha tb iska size 2 tha jb hmne 3 dalne ka try kra to isne kaha jagah nhi h toh isne 2 size ko convert krke 4 krliya
    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    // Size means kitne elements vector mein present h
    cout<<"Size -> "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"Empty or not empty "<<v.empty()<<endl;
    cout<<"First element is "<<v.front()<<endl;
    cout<<"Last element is "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

    return 0;
    
}