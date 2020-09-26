#include <iostream>
#include <vector>
using namespace std;
void fun(vector <int> v)  //to make changes to original vector we use  vector <int> &v as formal parameter.
{
    v.push_back(20);
    v.push_back(23);
}
int main()
{
    vector <int> v{1,2,3};
    fun(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
//call by value does not change value to original vector here.
/* void fun(int a[])
{
    a[1]=4,a[2]=6;
}
int main(int argc, char const *argv[])
{
     int a[] = {1,2};
     fun(a);   
     cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    return 0;
}
// array me call by value se bhi changes ate hai irrespective of vars.
*/