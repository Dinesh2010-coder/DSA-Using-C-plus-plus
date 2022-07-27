#include<iostream>

using namespace std; 

class graph{
    public:
    bool** adj;
    int n;

    graph(int n){
        this->n = n;
        

        adj = new bool* [n];
        for (int i = 0; i < n; i++)
        {
            adj[i] = new bool[n];
            for (int j = 0; j < n; j++)
            {
                adj[i][j] = 0;
            }
            
        }
        
    }

    void addEdge(int u,int v){
        // direction == 0  -> undirected graph
        // direction == 1  -> directed graph

        adj[u][v]=1;

        // if (direction == 0)
        // {
            adj[v][u]=1;
        // }
    }

    void printAdjMatrix(){
        for (int i = 0; i < n; i++)
        {

            cout<<i<<" : ";
            
            for (int j = 0; j < n; j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
};


int main(){
    int n,m;
    cout<<"Enter the no of nodes : "<<endl;
    cin>>n;

    cout<<"Enter the no of edges : "<<endl;
    cin>>m;
    
    graph g(n);

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;

        // creating an undirected graph
        g.addEdge(u,v);
    }

    g.printAdjMatrix();    
    return 0;
}