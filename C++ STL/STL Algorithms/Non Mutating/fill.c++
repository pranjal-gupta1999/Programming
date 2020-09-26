//fill function replace elements to the given value in its range.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v{1,2,3};
    fill(v.begin(),v.end(),20);
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
}