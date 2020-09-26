//this is the keyword which is a pointer ,points to an object that invokes member function.
//implicitly har member function ke saath this pointer laga rehta hai.
//static member data me this pointer nahi laga rehta.
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    //   A& set(int a)
    //   {
    //       this->a=a;          //esa karne par hum chain function call bhi use kar sakte hai
    //       return *this;
    //   }
    void set(int a)
    {
        this->a = a;
    
    }
    void show()
    {
        cout << "The value is " << a << endl;
    }
};
int main()
{
    A a1;
    a1.set(34);
    a1.show();
    //    a1.set(34).show();  //this is chained function call
    return 0;
}

/*  #include <iostream>
 
using namespace std;

class Box {
   public:
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume() {
         return length * breadth * height;
      }
      int compare(Box box) {
         return this->Volume() > box.Volume();
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   if(Box1.compare(Box2)) {
      cout << "Box2 is smaller than Box1" <<endl;
   } else {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
   
   return 0;
} */
