#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["gfg"] = 23;
    m.insert({"deep",200});
    m.insert({"gfg",200});  //it shuld only contains the unique key.
    cout<<m.size()<<endl;
    for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;  //they can be in any order
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<m.count("gfg")<<endl;
    auto it2 = m.find("gfg");
    cout<<it2->first<<" "<<it2->second<<endl;
    m.erase("gfg");
    return 0;
}
//it uses hashing.unordered arrangement.