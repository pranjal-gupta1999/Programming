#include <iostream>
#include <vector>
using namespace std;
struct Details
{
     string name , addr;
};

int main(int argc, char const *argv[])
{
    Details s1,s2;
    vector <Details> v;
    v.push_back(s1);    
    v.push_back(s2);  
    for(Details &l : v)   // for good practise we use reference here 
    {
        l.name="pranjal";
        l.addr= "mp";
    } 
    for(Details &l : v)
    {
       cout<<l.name<<" "<<l.addr<<endl;
    } 

    return 0;
}
