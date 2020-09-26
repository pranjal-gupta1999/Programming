/* Static memory allocation --
  1. all things get allocated  before execution.
  2. memory cant be reused.
  
  Dynamic memory allocation --
   1. Allocation done during execution.
   2. memory is reusable.  
   
   if global and local have same variable then the local variable gets precedence to that function.

   Memory allocation in c program --
   1. code - All code ie a.exe (text segment) gets stored first in the memory.
   2. static/global variable not local one -- it have 2 segments  I. (data segment) -- For initialised variable. eg. int i=5;
                                                    II. (bss segment) -- For uninitialized variable eg. int i;
   3. stack (main frame) - all the variables in the main function gets stored in lifo fashion(first main block then func call then printf and so on.
   When they gets executed they get destroyed).
   compilor has some memory for stack. if the blocks are more enough such that there is no space. this condition is called stack overflow.
   eg. recursion with no base address.
 
   4.Heap - eg. variable size array. we can anytime request a memory and release it.
     
    we can check memory size by command ---      gcc hello.c ; size .\a.exe
     */



#include <stdio.h>
#include <string.h>
int b=5;
int main()
{
       int b=2;
       printf("%d",b);
    return 0;
}
