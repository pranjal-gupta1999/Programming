#include <iostream>
using namespace std;
class Name
{
    public:
    Name()
    {
      cout<<"Constructor called!"<<endl;
    }
    ~Name()
    {
        cout<<"Destructor called!"<<endl;
    }
};
int main()
{  cout<<"Inside main block"<<endl;
    Name n1;
    {
        cout<<"in block"<<endl;
        cout<<"creating 2 more objects"<<endl;
        Name n2, n3;
        cout<<"Return to main block"<<endl;
    }// scope ke baad dono object destruct ho jayenge
    return 0;
    //isme pehla wla bhi object detsroy ho jayega.
}