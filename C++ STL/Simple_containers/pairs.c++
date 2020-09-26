/* pair contains 2 elements only .They may be of any type.and are accessed by first and second methods. 
for comparision 
     1. if both the elements are same then they are equal ie returns 1.
     2. for > or < we first check the first element , if they are same then on second and then decide it respectively.*/
#include <iostream>
using namespace std;
int main()
{
    pair<int,int> p1(1,2);
    cout<<p1.first<<" "<<p1.second<<endl;
    pair <int,int> p2(1,3),p3(2,3);
    cout<<(p2==p3)<<" "<<(p2>p3)<<" "<<(p2<p3)<<endl;
    return 0;
}