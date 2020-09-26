/* priority queue is in queue header file.
   by default priority queue is made up of MAX HEAP.
   Heap is binary tree which means it must have 2 nodes and the root node is largest. */
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
//priority queue is used in dijistra ,prims,huffman ,heap sort algorithms.in java priority queue is of MIN HEAP.