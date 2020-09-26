#include <iostream>
#include <queue>
#include <iterator>
using namespace std;
int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
   cout<<q.front()<<" "<<q.back()<<endl;
   while(q.empty()== false)
   {
       cout<<q.front()<<" ";
       q.pop();
   }
    return 0;
}
//queue is FIFO based .They are container adapter.
//push ko enque aur pop ko deque bhi kehte hai.They have these much functions only.
/* container adapters are interfaces that is use over containers to either limit or increase the functionlities of it. 
DIFFERENCE BETWEEN FORWARD_LIST AND QUEUE
   forward list is based on FILO while queue is based on FIFO.
   FORWARD list is sequenced container and queue is adapters. */