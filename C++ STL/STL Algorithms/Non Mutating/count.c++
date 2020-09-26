#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s = "geeksforgeeks";
    cout<<count(s.begin(),s.end(),'e');  //count function returns the count value of the character.
    return 0;
}