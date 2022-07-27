#include<iostream>
#include<queue>

using namespace std; 

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;
        while (index>1)
        {
            int parent = index/2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            
            else
            {
                return;
            }
            
        }
        
    }

    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }

    void deletion(){
        if (size == 0)
        {
            cout<<"nothing to delete "<<endl;
        }

        // step 1 : put last element into first index
        arr[1] = arr[size];

        // step 2 : remove last element
        size--;

        // step 3 : take root to its correct position
        int i=1;    // root node
        while (i < size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else
            {
                return;
            }
            
            
        }
        
        
    }

};


// MAX HEAP
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }   
}

/*
// MIN HEAP
void heapify(int arr[], int n, int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if(left <= n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right <= n && arr[smallest] > arr[right]){
        smallest = right;
    }
    
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
    }
}

*/

void heapSort(int arr[], int n){
    int size = n;
    
    while (size>1)
    {
        // step 1 : swap
        swap(arr[size],arr[1]);
        size--;

        // step 2 : root at it's correct position
        heapify(arr,size,1);
    }
    
}
 
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(52);
    h.insert(53);
    h.insert(54);
    h.print();

    h.deletion();
    h.print();

    int arr[6] = {0,54,53,55,52,50};
    int n = 5;

    // heap creation
    for (int i = n/2; i > 0;i--)
    {
        heapify(arr,n,i);
    }

    cout<<"Printing array now : "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    // heap sort
    heapSort(arr,n);

    cout<<"Printing sorted array now : "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    

    // PRIORITY QUEUE

    cout<<"USING PRIORITY QUEUE "<<endl;

    // maxheap
    priority_queue<int> pq;

    cout<<"MIN HEAP : "<<endl;
    
    pq.push(50);
    pq.push(40);
    pq.push(60);
    pq.push(30);
    
    cout<<"Element at Top : "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at Top : "<<pq.top()<<endl;
    cout<<"Size is : "<<pq.size()<<endl;

    if (pq.empty())
    {
        cout<<"pq is empty"<<endl;
    }
    else
    {
        cout<<"pq is not empty"<<endl;
    }

    // minheap
    priority_queue<int, vector<int>, greater<int> > pq1;

    pq1.push(50);
    pq1.push(40);
    pq1.push(60);
    pq1.push(30);
    
    cout<<"MIN HEAP : "<<endl;

    cout<<"Element at Top : "<<pq1.top()<<endl;
    pq1.pop();
    cout<<"Element at Top : "<<pq1.top()<<endl;
    cout<<"Size is : "<<pq1.size()<<endl;

    if (pq1.empty())
    {
        cout<<"pq1 is empty"<<endl;
    }
    else
    {
        cout<<"pq1 is not empty"<<endl;
    }
    
    
    return 0;
}