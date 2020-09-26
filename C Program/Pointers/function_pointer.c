/* functions are nothing but a set of instructions.
this type of pointer hold the address of these instructions.
these are used to make callback functions.
they are used to pass a function to a function and can be called again(hence named callback function)

   Declaration-  telling the compilor about the variable (no space reserved).
   Definition- declaration + space reserved  */
   #include <stdio.h>
   int sum(int a,int b)
   {
       return a+b;
   }
   int main()
   {
       printf("The value of sum is %d\n",sum(1,2));
       int (*fptr)(int,int);// Declaring a pointer  .this is the syntax.
       //we can also write fptr=&sum or not use & as it already pointing to the instructions address
       fptr= sum;  //Creating a pointer
       int d=(*fptr)(2,3); // Dereferencing a pointer
       //or int d=fptr(2,3);
       printf("The value of sum is %d\n",d);
       return 0;
   }
   