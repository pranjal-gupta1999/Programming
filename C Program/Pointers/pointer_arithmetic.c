#include <stdio.h>
int main()
{
   int a=4;
   int* ptr = &a;
   printf("The value of a is: %d\n",*ptr);
   printf("The value of a is: %d\n",*ptr+1);
   printf("The address of a is: %d\n",ptr); 
   printf("The address of a is: %d\n",ptr+1); // line no 9 me ptr ka output sirf u sline ko reflect krta hai, ptr ki value wahi rahegi 
   printf("The address now is : %d\n",ptr++);
   printf("The address now is : %d\n",++ptr);
   printf("The address of a is: %d\n",ptr); // increment/decrement operator actual me ptr ki value badal deta hai.
   printf("The value of a is: %d\n",*ptr); //after changing the address the value of a is same as of ptr or the value related to it(random).
   printf("The value of a is: %d\n",*ptr+1);
   return 0;
}
/* pointer arithmetic is somehow different ptr + 1 that means ptr gets added by the 1 times of
 size of data type. here int have 4 byte so ptr +1 will increase the address by 4 digits.Similarly char have 1 byte 
 and so on. */


 /* However if we write *ptr +1 then it is equivalent to (value of var) + 1. */
 // Arithmetic operation allowed are  ++ , -- , + , - 

