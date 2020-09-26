#include<stdio.h> 
  
int main() 
{ 
    // Pointer to an integer 
    int *p;  
      
    // Pointer to an array of 5 integers 
    int (*ptr)[5];                            //declaring the pointer to an array.proper syntax of pointer to array.
    int arr[] = {1,2,3,4,5}; 
      
    // Points to 0th element of the arr. 
    p = arr; 
      
    // Points to the whole array arr. 
    ptr = &arr;  
      
    printf("The address are for p = %d, ptr = %d\n", p, ptr); 
    printf("The values are: %d  %d\n",*p,*ptr);

    printf("The size of array is: %d\n",sizeof(arr));  //array size is (no. of element x size of their types).
    printf("The sizes are: %d  %d\n",sizeof(p),sizeof(ptr));
    printf("The sizes are: %d  %d   %d   %d\n",sizeof(*p),sizeof(*ptr),sizeof(**ptr),sizeof(&arr[0]));
    printf("%d\n",sizeof(void));  //void have 1 byte size
    p++;  
    ptr++; //there is no change in their sizes during increment or decrement. 
      
    printf("The address are for p = %d, ptr = %d\n", p, ptr); 
    printf("The values are: %d  %d\n",*p,*ptr); 
    return 0; 
} 
/* Base type of p is int while base type of ptr is 'array of 5 int'.Initially both pointers refer to same base adddress
But after increment p will get increased by 4 bytes and ptr will get increased by (4x5)bytes

For their values we will be getting the 0th element for p but for ptr we will get the address as the value(kyuki ptr pehle arr ke address ko hold 
kar raha tha jo &arr[0] hai  aur dereference ke baad bhi array ko hold kar raha hai jise denote karte hai base address se(&a[0]))
after increment , p will have 1st element while ptr have address + (4 x 5 elements).

For thier sizes pointer size is fixed for all types ie 4bytes for 32 bit and 8 bytes for 64 bits.
the size of array here refers (4bytes x no. of element).
On deferencing since p is holding only 1 element so size=4 and ptr holds 5 elements simultaneously, so its size is
4(fixed size) x 5(elements) =20.
*/

