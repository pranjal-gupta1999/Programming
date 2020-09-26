#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int* b=&a;
    cout<<"a is "<<a<<endl;
    cout<<"a address is "<<&a<<endl;
    cout<<"a value is "<<*b<<endl;

    int* l;
    cout<<"The address is "<<l<<endl; //if i make int or any data type wild pointer then it point to random address.

    void* m;
    cout<<"The address is "<<m<<endl; //if i make void wild pointer it will return garbage value.

}