//binary search  function is only used in sorted range containers.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {10,20,30,40,50};
    if(binary_search(a,a+5,20))
    {
        cout<<"Found!"<<endl;
    }
    else{cout<<"Not Found!"<<endl;}
    return 0;
}