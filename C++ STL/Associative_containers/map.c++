//map also implements in red black tree or self balancing binary search tree.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,int> m;  //to make the in descending order we use map<int,int,great<int>> m
    m.insert({1,100});  //the first arg is a key and second is value.
    m.insert({2,200});
    m[4]= 300;  //we can also write in this way.
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "   // they are in sorted form (ascending order) on basis of key.
            <<(*it).second<<" ";
    }
    cout<<endl;
    m.insert({2,500});  //it simply ignores if the key is same.
    m[2] = 300;  //on writing this we have changed the value of alredy existing key
    cout<<m[5]<<endl;  //here since we have not created this before so it create 5 as a key and 0 as its value,to avoid this we use at(). 
    for(auto it : m)
    {
        cout<<it.first<<" " 
            <<it.second<<" ";
    }
    cout<<endl;
    cout<<m.size()<<endl;  //hence size changes to 4
    if(m.find(4)==m.end())  //if we found the key then it displays the corresponding value otherwise go to m.end()
    { cout<<"not found!"<<endl;  }
    if(m.count(4)==0)  //if we found the key then it reurn 1 otherwise 0.
    { cout<<"not found!"<<endl;  }
    else{cout<<"found!"<<endl;}
    auto it = m.lower_bound(1);  // 1. if matches then return same key 2. if not match then return just ahead of the greater key  3. if greatest than keys then return end().
    cout<<(*it).first<<endl;
    auto it2 = m.upper_bound(3);  // 1. if matches then return just ahead greater key 2. if not match then return just ahead of the greater key  3. if greatest than keys then return end().
    cout<<(*it2).first<<endl;
    m.erase(4);  //we can also erase in range like m.erase(m.find(1),m.end()).
    
    return 0;
}