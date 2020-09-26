#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));  //if we not write likethis then it will generate same random no when calling.
   for(int i=0;i<5;i++)
   {
       cout<<rand()<<endl;
   }
   cout<<RAND_MAX<<endl;   //rand() generates no. between 0 to 32767
    return 0;
}