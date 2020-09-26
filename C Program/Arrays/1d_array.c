//array is the collection of data of same types. They are stored in the contiguous(ek ke baad ek memory block me) memory of all same sizes.
//it also store derived data types like pointers and structures.
//1d array is list(also called vectors) and 2d array is table(also called matrices).
//advantage- used to store multiple data items of same type in a single name.
/* disadvantage- 1.once size declared we cannot change the size further.also waste of memory.
                 2. if the memory is not contiguous, we cannot make array.
                 3. poor time complexity in insertion and deletion operation.
                 */
//1 d        
#include <stdio.h>
int main()
{   int marks[5]; //or marks[3]={1,2,3}
    for (int i=0;i<5;i++)
    {
        printf("Enter the no. you want to store: ");
        scanf("%d",&marks[i]);
    }
     for (int i=0;i<5;i++)
    {
        printf("the no. at postion %d is: %d\n ",i,marks[i]);
    }
    return 0;  
}
 