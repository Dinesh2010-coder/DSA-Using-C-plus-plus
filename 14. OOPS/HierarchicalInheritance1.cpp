#include<iostream>

using namespace std; 

// Hierarchical Inheritance
class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    } 
};

class B: public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    } 
};

class C: public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    } 
};

int main(){
    A object1;
    cout<<"Class A : "<<endl;
    object1.func1();

    B object2;
    cout<<"Class B : "<<endl;
    object2.func1();
    object2.func2();

    C object3;
    cout<<"Class C : "<<endl;
    object3.func1();
    // object3.func2() will not work as class C is not child of class B.
    object3.func3();
    
    return 0;
}