//interally multiset also implements red black tree. all are same here only the duplicacy allowed .
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(15);
    ms.insert(5);
    cout<<ms.size()<<endl;
    for(int i:ms)
    {
        cout<<i<<" ";
    }
    return 0;

}