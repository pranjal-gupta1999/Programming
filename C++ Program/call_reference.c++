#include <iostream>
using namespace std;
int fun(int* a,int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    cout<<"The new value of a is "<<*a<<" and b is "<<*b<<endl;
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter 1st no."<<endl;
    cin>>a;
    cout<<"Enter 2nd no."<<endl;
    cin>>b;
    cout<<"The new value of a is "<<a<<" and b is "<<b<<endl;
    fun(&a,&b);
    cout<<"The new value in main function of a is "<<a<<" and b is "<<b<<endl;
    return 0;
}