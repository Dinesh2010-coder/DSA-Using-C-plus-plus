#include <bits/stdc++.h>
using namespace std;

int countWay(int start , int dest ){   // stRT =0 , dest =3
    
    if(start==dest){
        return 1;
      
    }
    
    if(start > dest){
        return 0;
    }
    
    int one = countWay( start+1 , dest );
    int two = countWay( start+2 , dest );
    
    return one+two;
    }
    
    
int main()
{
    int start=0;
    
    int dest=5;
    
    cout<<countWay(start,dest);
    
    
    return 0;
}
