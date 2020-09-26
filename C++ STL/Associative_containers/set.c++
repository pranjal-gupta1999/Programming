//internally set uses red black tree.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;  //set in ascending order and no duplicacy allowed.
    s.insert(10);
    s.insert(5);
    s.insert(15);
    cout<<s.size()<<endl;
    for(int i : s)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    set<int,greater<int>> s2(s.begin(),s.end()); //set in descending order
    for(int i : s2)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    s2.insert(5); //since it is duplicate and duplicacy is not allowed so no change.
    cout<<s2.size()<<endl;
    for(auto it = s2.rbegin();it!=s2.rend();it++)  //rbegin() points to last key and rend() points to the key beyond the first key.
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it = s2.find(5); //1. if the value is here then we get value  2. if we do not get key then it will point to s2.end().
    cout<<*it<<endl;
    if(s2.count(10)) //since set do not contains duplicacy so count return 0 or 1
    {
        cout<<"Found"<<endl;
    }
    else{cout<<"Not found"<<endl;}
    s2.erase(10);
    cout<<s2.size()<<endl;
    auto it2 = s2.lower_bound(5);  //1. if the value is same as key we get the value.   2. if the value is not present then it will return pointer to just greater than the value.
                                    //3 . if the value is greatest than the greatest key in set then it will return to s2.end(). 
    if(it2!= s2.end())
    {
        cout<<*it2<<endl;
    }
    auto it3 = s2.upper_bound(5);//1. if the value is same then we get key just greater than it  2. if the value is not present then we get key just greater than it.
              // 3. if the value is greatest than the greatest key in set then it will return to s2.end(). 
    cout<<*it3<<endl; //output sahi nahi a raha
    return 0;
}
//IN C++ +infinite is refers to INT_MAX and -infinite refers to INT_MIN.