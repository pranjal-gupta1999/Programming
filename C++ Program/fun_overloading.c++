#include <iostream>
using namespace std;
int volume(int a,int b,int c)
{
    return (a*b*c);
}
int volume(int a,int b)
{
    return (3.14*a*a*b);
}
int volume(int a)
{
    return (a*a*a);
}
int main()
{
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of cuboid is "<<volume(3,5,6)<<endl;
    cout<<"The volume of cylinder is "<<volume(3,5)<<endl;
    return 0;
}
/* function overloading is a part of polyphormism that means many forms.
   it means same name functions with different arguments are used.
   this makes programmer more comfort in chosing the name of functions.  */