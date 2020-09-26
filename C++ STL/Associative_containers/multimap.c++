#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int,int> m;
    m.insert({1,10});
    m.insert({2,20});  //here we can have multiple keys of same type.
    m.insert({1,30});
    m.insert({3,40});  //here we cannot write m[2] = 100 because there may be more instances of keys.
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m.count(1)<<endl;
    auto it = m.lower_bound(2);  //similarly for upper_bound() all procedure discussed before.
    cout<<(*it).first<<endl;
    auto it2 =m.equal_range(1);   //this we write so that we could get only particular key and its value ie of 1
    for(auto itr = it2.first ; itr!=it2.second ; itr++)  
    {
       cout<< itr->first<<" "<<itr->second<<endl;
    }   // upto here is the above syntax.
    cout<<m.erase(1)<<endl;  //it deletes all instances related  to that key
    cout<<m.count(1)<<endl;
    return 0;
}