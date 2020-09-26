// deque stands for double ended queue.A queue data structure allows insertion only at the end and deletion from the front.
#include <iostream>
#include <deque>
using namespace std;
int main(int argc, char const *argv[])
{
    deque <int> q{1,2,3};
    q.push_back(8);
    q.push_front(10);
    for(auto i :q)  //i is integer type
    {
        cout<<i<<" ";   //10 1 2 3 8
    }
    cout<<endl;
    cout<<q.front()<<" "<<q.back()<<endl;
    auto it = q.begin(); //begin() returns iterartor points to first element of deque and end() returns iterator points to address beyond the last element.
    it++;
    q.insert(it,12); //since iterator shift to next place so 12 is inserted at second place and then other. 10 12 1 2 3 8
    q.pop_back();
    q.pop_front();
    cout<<q.size()<<endl;
    for(auto i : q)
    {
        cout<<i<<" ";  //12 1 2 3
    }
    cout<<endl;
    q.erase(q.begin());  
    for(auto i : q)
    {
        cout<<i<<" ";  //1 2 3
    }
    return 0;
}
/* deque is a container in which we can either push or pop element from both the sides i.e front and back.
   Since Deque supports both stack and queue operations, it can be used as both. time complexity is O(1). 
   The Deque data structure supports clockwise and anticlockwise rotations in O(1) time which can be useful in certain applications.
   Dequeue is used for max/min and finding from the subarrays types of questions. 
   
   difference between deque and list.
    ->  since both have pop and push functions on either front or back.they have --
         1. deque is made of dynamic array and list of doubly linklist.
         2. deque is fast than list since time complexity of insertion and deletion is O(1) while deque is O(n)(it has to traverse all elements.)*/