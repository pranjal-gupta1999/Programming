#include <iostream>
#include <vector>
//non mutating are also called non manipulating algorithms.
#include <numeric> //for accumulate
#include <algorithm> //for minus()
using namespace std;
int mycmp(int x,int y)
{
    return x-y;
}
int main()
{
    vector <int> v{10,20,30};
    int count = 0;
    cout<<accumulate(v.begin(),v.end(),count)<<endl;  //accumulate function return addition of elements by default
    int count1=100;
    cout<<accumulate(v.begin(),v.end(),count1 ,mycmp);  //by our own function
    return 0;
}