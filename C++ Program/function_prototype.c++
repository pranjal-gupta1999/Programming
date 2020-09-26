#include <iostream>
using namespace std;
int fun();   //this is function prototype
int main()
{
    fun();
    return 0;
}
int fun()
{
    cout<<"hello"<<endl;
    return 0;
}
/*if we define function below main function and call that function from main -->
    in C   there will be a warning but in c++  this is not allowed.
    to avoid this we use function prototypes.  */