/* void pointer-  no data type associated with it.
They can easily be typecasted to other pointer type. 
used in dma as it can allocate the different memory block of different type.
no pointer arithmetic performed in void pointer.however gnu compilor will run the program (consider size of void is 1).
we cannot directly dereferenced ptr of void type.
calloc() and maloc() return void pointer. */

#include <stdio.h>
int main()
{   int a=5;
    float b=3.5;
    void * ptr;
    printf("The address is %d\n",ptr);  //it throws garbage value
    ptr= &a;
    printf("The address is %d\n",ptr);  
 //   printf("The value of a is %d\n",*ptr);  this will throw error 
    printf("The value of a is %d\n",*( (int *)ptr  ) );    //typecasting to int
     ptr= &b;
 //   printf("The value of b is %f\n",*ptr);  this will throw error 
    printf("The value of b is %f\n",*(  (float *)ptr  ));    //typecasting to float
    return 0;
}
