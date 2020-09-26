//list is doubly linklist where we can push or pop elements in both the ways.
#include <iostream>
#include <list>
using namespace std;
int main(int argc, char const *argv[])
{
    list <int> l;
    l.assign({1,2,3});
    l.push_back(6); // add 6 at back
    l.push_front(0); //add 0 at front 0 1 2 3 6
    l.pop_back();  // 0 1 2  3
    auto it = l.begin(); //points to begin element 0
    cout<<*it<<endl;
    it++;  //pointing to next element 1
    cout<<*it<<endl;
    it =  l.insert(it,7); // 0 7 1 2 3 point to 7 .if we dont return their value to iterator then also it will work . we done this only to update iterator
    cout<<*it<<endl;
    it = l.insert(it,2,4); //  0 4 4 7 1 2 3  point to pehle wala 4
    cout<<*it<<endl;
    it = l.erase(it);   //0 4 7 1 2 3 point to 4 .
    cout<<*it<<endl;
    l.remove(7);  // 0 4 1 2 3 
    l.insert(it,4); // 0 4 4 1 2 3 points to second wala 4
    l.unique();  // delete consecutive same no. only i.e 0 4 1 2 3
    for(auto i: l)
    {
        cout<<i<<" ";
    }
    return 0;
}
// agar hum {a,b} insert kar rahe hai(any back or front) then iterator points to element a always .
//agar hum erase kar rahe hai to next element to point karega. 