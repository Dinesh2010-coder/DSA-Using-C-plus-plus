#include<iostream>

using namespace std; 

class A{
    
    public:
    void sayhello(){
        cout<<"Hello Babbar."<<endl;
    }

    void sayhello(string name){
        cout<<"Hello "<<name<<endl;
    }

    int sayhello(string name, int n){
        cout<<"Hello "<<name<<endl;
        return 1;
    }

    int sayhello(char name){
        cout<<"Hello "<<name<<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output "<<value2-value1<<endl; 
    }

    void operator() (){
        cout<<"mein bracket hu "<<this->a<<endl;
    }
};

class Animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};



int main(){

    Dog d1;
    d1.speak();
    /*
    B obj1,obj2;
    obj1.a=4;
    obj2.a=8;

    obj1+obj2;
    obj1();

    */

    /*
    // A obj;
    // obj.sayhello();    
    */

    return 0;
}