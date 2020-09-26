#include <iostream>
using namespace std;
int main()
{
    int n =5;
    cout<<__builtin_popcount(n)<<endl;  //it return no. of 1s in binary form ie 5 = 101 have 2 1s.
    long s =8;
    cout<<__builtin_popcountl(s); //for long we use __builtin_popcountl().
    return 0;
}