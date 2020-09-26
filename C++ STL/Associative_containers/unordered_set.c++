//the unordered set is implemented using hashing.
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(5);
    s.insert(10);  // unordered set only conatins unique elements.
    cout<<s.size()<<endl;
    for(auto it: s)
    {
        cout<<it<<endl;   //the order can be anything as they are stored in hash.
    }
    auto it = s.find(5);
    cout<<*it<<endl;  //we get value then print element otherwise s.end()
    cout<<s.count(10)<<endl;  //return 1 if find otherwise 0
    //no lower_bound or upper_bound.
    cout<<s.erase(10); //it erase that instance
    return 0;
}