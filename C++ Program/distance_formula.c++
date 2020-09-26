#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x, y;
    public:
        Point(int , int); //declaring a construtor
        void print()
        {
            cout<<"The points are ("<<x<<" , "<<y<<")"<<endl;
        }
        friend float distance(Point p1, Point p2);
};
Point :: Point(int a, int b)
{
    x=a;
    y=b;
}
float distance(Point p1, Point p2)
{
   return sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
   
}
int main()
{
    Point o1(0,1);
    o1.print();
    Point o2(0,6);
    o2.print();
    float c =  distance(o1,o2);
    cout<<"The distance is "<<c<<endl;
    return 0;
}