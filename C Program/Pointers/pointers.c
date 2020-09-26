#include <stdio.h>
int main()
{  int a=65;
    int* ptr = &a;
    int* ptr2 = NULL;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*ptr);
    printf("The value is %d\n",*(&a));
    printf("The address of a is %d\n",&a);
    printf("The address of a is %d\n",ptr);
    printf("The address of pointer ptr is %d\n",&ptr);
    printf("The value  is %d\n",ptr2); // if write *ptr it will return value which is impossible and code stops.
    return 0;
}
 //pointer is a variable that hold the address of another variable.
 // * is called dereferenced operator(indirection operator) used to give value of that variable and ampersand (&) gives address of a variable. 
 //null pointer is pointer which does not have any address of a variable.If not assigned value it will return garbage value.
 //advantage --> dynamic memory allocation
 //     data structures 
 // %p returns address of a variable and %x converts into hexadecimal