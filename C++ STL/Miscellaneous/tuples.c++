#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    tuple<string,int,string> t =make_tuple("geeks",3,"forgeeks");  //tuple is use to store heterogeneous elements in it.just like struct 
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    get<0>(t) = "pranjal";
    cout<<get<0>(t);
    return 0;
}