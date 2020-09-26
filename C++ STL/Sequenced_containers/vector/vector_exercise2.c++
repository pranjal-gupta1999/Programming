#include <iostream>
#include <vector>
#include <algorithm>  //for sort
#include <iterator>
using namespace std;
int cmp(pair<int,int> p1, pair <int,int> p2)
{
    return p1.first > p2.first;
}
void student(int roll[], int marks[],int n)
{
    vector < pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        v.push_back({marks[i],roll[i]});
    }
    cout<<"The size is "<<v.size()<<endl;
    sort(v.begin(),v.end(),cmp);  //if we dont make cmp function then sorting is done in ascending order (from marks) but we want sort in descending order(from marks).
    cout<<"After sorting gives: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i].second<<" "<<v[i].first<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int roll[] = {101,108,103,105};
    int marks[] = {70,80,40,90};
    int n = sizeof(roll)/sizeof(roll[0]);
    student(roll,marks,n);
    return 0;
}
