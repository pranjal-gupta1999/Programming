/* static variable have memory with class.
By default value of static variable is 0.
static variable are also called class variable.
static variable ki memory object ke saath nahi badalti.
static var ko class ke bahar declare krna hai 

static function is used to access all static vars in it only.
*/
#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
     
     public:
        void setdata()
        {
            cout<<"Enter your id"<<endl;
            cin>>id;
            count++;
        }
        void displaydata()
        {
            cout<<"The id of "<<count<<" employee is "<<id<<endl;
        }

        static void getcount()   //static function
        {
            cout<<"The value of count is "<<count<<endl;
        }
};
int Employee :: count;
//int Employee :: count=1000;   we can give initial value of static var like this
int main()
{
    Employee rohan, pranjal, golu;
    rohan.setdata();
    rohan.displaydata();
    Employee :: getcount(); //accessing a static function without creating an object

    pranjal.setdata();
    pranjal.displaydata();
    Employee :: getcount(); //accessing a static function without creating an object

    golu.setdata();
    golu.displaydata();
    Employee :: getcount(); //accessing a static function without creating an object
    return 0;
}
//here the value of count does not initialise again wrt objects. saare objects ek count memory ko share kar rahe hai.