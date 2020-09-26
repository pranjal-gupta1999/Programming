/* forward list implements singly link list and list implements doubly link list.
It is useful as it provide constant
it works on FILO
insertion and deletion of elements time.
Only forward traversal is required in forward list. */
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list <int> l{1,2};
    l.assign({1,2,3}); //assign function hum override karne ke liye use krte hai.purane elemnets override ho jaate hai.
    for(auto it : l)
    {
        cout<< it<<" ";
    }
    cout<<endl;
    l.assign(3,10); // 3 elements inserted here .each valued 10
    for(auto it : l)
    {
        cout<< it<<" ";
    }
    cout<<endl;
    l.remove(10); //remove function removes all instances associated with 10.
    l.push_front(2);
    l.push_front(13);
    l.pop_front();
    for(auto it : l)
    {
        cout<< it<<" ";
    }
    cout<<endl;  // forward list don't have size() function.
    forward_list <int> l1;
    l1.assign(l.begin(),l.end());
    for(auto it : l1)
    {
        cout<< it<<" ";
    }
     cout<<endl;
    forward_list <int> l2{15,20,30};
    auto it = l2.insert_after(l2.begin(),{1,2}); //all elements are placed after the begin() position.Here 2 gets pointed (last element gets pointed).They returns iterator.
         it = l2.emplace_after(it,40); //emplace is more optimised than insert. it can only insert single element at a time.added 40 after 2 and 40 gets pointed.
         it = l2.erase_after(it);  //it erases the element which is after 40. now pointer point to element sfter 40 i.e 30.
         cout<<*it<<endl;
         for(auto it : l2)
    {
        cout<< it<<" ";
    }
    cout<<endl; 
    l1.merge(l2); //all elements gets stored in l1 . the elements displayed in sorted order(ascending)
    for(auto it : l1)
    {
        cout<< it<<" ";
    }
    cout<<endl;
    l1.reverse();
    for(auto it : l1)
    {
        cout<< it<<" ";
    }
    return 0;
}
//more functions -->   clear(), empty() , reverse() and merge() and sort(). sort() takes O(nlogn) all others O(1) or O(n),remove,reverse gives O(n)
//isme erase() aur insert() fuction nahi but erase_after() aur insert_after() hai baaki sab vector functions .

