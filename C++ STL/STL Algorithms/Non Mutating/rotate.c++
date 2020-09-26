#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v{1,2,3,4,5,6};
    rotate(v.begin(),v.begin()+3,v.end()); // begin() se begin()+2 elements ko pakda aur last me daal diya.
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
}