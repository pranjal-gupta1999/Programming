#include <iostream>
using namespace std;
template <typename T>
T add(T x, T y)
{
   return (x+y);
}
int main()
{
   cout<<"The sum of ints are "<< add<int>(2,3)<<endl;
   cout<<"The sum of floats are " <<add<float>(2.4,3.5)<<endl;
    return 0;
}
//template is formula of creating generic functions and class.
//It is similar to function ovrloading but its different.
//better than using macros as there is type checking.