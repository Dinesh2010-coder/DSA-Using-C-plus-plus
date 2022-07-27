#include<iostream>
#include<map>

using namespace std; 

int main(){
    // creation of unordered map
    map<string,int> m;

    // insertion : we have 3 ways
    // 1
    pair<string,int> p = make_pair("dinesh",3);
    m.insert(p);

    // 2 
    pair<string,int> pair2("khemka",2);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    m["mera"] = 2;       // it will replace 1 with 2 as it will update previous entry only it will not create new entry.

    // Search
    cout<<"Value for mera = "<<m["mera"]<<endl;

    cout<<"Value for dinesh = "<<m.at("dinesh")<<endl;

    // cout<<m.at("unknown")<<endl;  // it will throw error

    cout<<"Value for dinesh = "<<m["unknown"]<<endl;  // it will return 0 as it is creating a new entry for key "unknown"

    // size
    cout<<"Size is : "<<m.size()<<endl;

    // to check the presence of a particular key
    cout<<m.count("bro")<<endl;   // o/p --> 0
    cout<<m.count("khemka")<<endl;   // o/p --> 1

    // erase
    m.erase("khemka");
    cout<<"Size is : "<<m.size()<<endl;

    // accessing the map we have 2 ways : 
   
    /*
    // 1 
    for(auto i:m){
        cout<<i.first << " "<<i.second <<endl;
    }
    */


    // by iterating using iterator
    map<string,int> :: iterator it = m.begin();

    while (it != m.end())
    {
        cout<< it->first << " " << it->second <<endl;
        it++;
    }
    return 0;
}