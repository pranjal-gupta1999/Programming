/* class does not have memory but object create memory .But this is partial information.
actually all member function have common memory , and object(s) provides different memories. */
#include <iostream>
using namespace std;
class Shop
{
    int item[100];
    int counter=0;
    int price[100];

    public:
       void setitem();
       void displayprice();
};
void Shop :: setitem()
{
   cout<<"Enter item id"<<endl;
   cin>>item[counter];
   cout<<"Enter its price"<<endl;
   cin>>price[counter];
   counter++;
}

void Shop :: displayprice()
{
    for(int i=0;i<counter;i++)
    {
      cout<<"The item price of ID "<<item[i]<<" is "<<price[i]<<endl;
    }
}
int main()
{
    Shop m;
    m.setitem();  //this again and again calling of function and working on contiguous counter integers proved that member function have common memory for an object.
    m.setitem();
    m.setitem();
    m.displayprice();
    Shop m1;
    m1.setitem(); //object ke corresponding different memory allocate hoti hai.
    m1.displayprice();
    return 0;
}