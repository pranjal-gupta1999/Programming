#include <iostream>
using namespace std;
int main()
{
    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    Meal m2=lunch;
    Meal m3=dinner;
    cout<<m1<<" "<<m2<<" "<<m3<<endl;
    cout<<breakfast<<" "<<lunch<<" "<<dinner<<endl;  //we can also write in this fashion
    
    return 0;
}
//enum is used to increase visibility of the code.Accordingly 1st element gets 0 value 2nd gets 1 value and so on..
