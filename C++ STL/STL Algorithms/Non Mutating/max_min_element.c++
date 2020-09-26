#include <iostream>
#include <vector>
#include <algorithm>  //for max and min element
using namespace std;
int main()
{
    vector <int> v{1,2,3,4,5,6};
    cout<< *max_element(v.begin(),v.end())<<endl;
    cout<< *min_element(v.begin(),v.end());
    return 0;
}
//they return pointer or iterator to containers.