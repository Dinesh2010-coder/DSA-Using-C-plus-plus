#include<iostream>
#include "Hero1.cpp"
#include<string.h>

using namespace std; 

class Hero {

    // properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Default Constructor called."<<endl;
        name = new char[100];
    }

    // parameterized constructor

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    // copy constructor
    Hero(Hero& temp){
        
        // deep copy 
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;


        cout<<"Copy Constructor called."<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    

    void print(){
        cout<<"Name : "<< this->name <<" , ";
        cout<<"Level : "<< this->level <<" , ";
        cout<<"Health : "<< this->health <<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    int setHealth(int h){
        health = h;
    }

    char setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){

        // this keyword not works in static functions
        // return health;

        // static function can access only static members
        // return health;

        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout<<"Destructor called."<<endl;
    }
    
};

int Hero::timeToComplete = 5;

int main(){
    /*
    // static keyword
    cout<<Hero::timeToComplete<<endl;

    // static function
    cout<<Hero::random()<<endl;
   */
    /*
    //static
    Hero a;

    // dynamic
    Hero *b = new Hero();
    // manually destructor call krna pdega.
    delete b;
    */

    /*
    Hero hero1;
    
    hero1.setHealth(15);
    hero1.setLevel('D');
    
    char name[7] = "Babbar";
    hero1.setName(name);
    
    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();
    */


    
    Hero dinesh(80,'D');
    dinesh.print();

    // copy constructor
    Hero chirag(dinesh);
    chirag.print();

    

    /*
    // object created statically
    cout<<"Hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;

    // dynamically
    Hero *h = new Hero(); 

    */

    // static allocation
    /*
    // creation of object
    Hero h1;  
    h1.setHealth(70);
    h1.setLevel('B');
    cout<<"h1 Health is : "<<h1.getHealth()<<endl;
    cout<<"h1 Level is : "<<h1.getLevel()<<endl;

    cout<<"Size of h1 is : "<<sizeof(h1)<<endl;

    Hero1 h2;

    h2.health = 70;
    h2.level = 'A';

    cout<<"Health is : "<<h2.health<<endl;
    cout<<"Level is : "<<h2.level<<endl;

    */

    /*
    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<<"Health is : "<<(*b).getHealth()<<endl;
    cout<<"Level is : "<<(*b).level<<endl;

    Hero *c = new Hero;
    c->setHealth(80);
    c->setLevel('B');
    cout<<"Health is : "<< c->getHealth() <<endl;
    cout<<"Level is : "<< c->level <<endl;

    */

    
    return 0;
}