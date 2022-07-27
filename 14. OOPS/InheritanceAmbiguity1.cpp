#include<iostream>

using namespace std; 

class A{
    public:

    void func(){
        cout<<"I am A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C: public A, public B{

};

int main(){
    C obj;
    // obj.func();   // This will show error as we are having func() in multiple classes   

    obj.A::func();   // This tells compiler that func() of class A is being called.
    obj.B::func();   // This tells compiler that func() of class B is being called.
    return 0;
}