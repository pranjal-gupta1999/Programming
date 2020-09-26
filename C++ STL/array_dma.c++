/* In c++ the arrays are stored in stack so they are not allowed to resize .
We could although create array in heap using pointer   (int *ar = new int[n]) but is applicable only for allocation and deallocation(first deallocate then reallocation take place) 
but not resizing. hence we use vectors. */
#include <iostream>
using namespace std;
int main()
{
    int *p = new int[4];  //allocation
    for(int i=0;i<4;i++)
    {
        p[i] = i;
    }
    for(int i=0;i<4;i++)
    {
       cout<<p[i]<<endl;
    }
     delete[] p;  //deallocate
    p = new int [2];
    for(int i=0;i<2;i++)  //reallocate 
    {
        p[i] = i;
    }
    for(int i=0;i<2;i++)
    {
       cout<<p[i]<<endl;
    }
   delete[] p;  //deallocate
    return 0;
}
/*free() is library function in c language that freed the memory allocation.
delete is operator in c++ language that freed the memory allocation and also call destructor. 
delete is fast as operator are faster than function. */
