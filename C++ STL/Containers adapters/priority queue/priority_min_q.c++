//to make a MIN HEAP(root node is minimum) we use this syntax instead of existing one ,here vector and greater function denotes elements of priority queue.
#include <iostream>
#include <queue>  //for priority queue
#include <cstdlib> //this header file is used to use abs() ie absolute positive.
using namespace std;
int main()
{
    priority_queue <int ,vector<int> ,greater<int> > pq;  //method 1
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.top();
    // int arr[] = {10,15,5};        //method 2
    // for(int i=0;i<3;i++)
    // {
    //     arr[i] = -arr[i];
    // }
    // priority_queue<int>pq(arr, arr+3);   //here arr+3 denotes 1 position ahead of last element .if there is vector we use  pq(v.begin(), v.end()) 
    
    // cout<<pq.size()<<endl;
    // while(!pq.empty())
    // {
    //     cout<<-pq.top()<<" "; //negation of function to get positive elements back
    //     pq.pop();
    // }
    return 0;
}
