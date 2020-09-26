#include <stdio.h>
int show(int a)       //declaring
{   int b;
   printf("Enter a no.");
   scanf("%d",&b);       //defining
    return a+b;
}
int main()
{
   int c =show(2);    //calling
   printf("The no. is %d",c);    //printf is library function.
    return 0;
}
  

  /*  Function is used to break large program into smaller pieces,also called procedure.
   4 ways of writing functions:
   1. with args with return val.
   2. no args no return val.
   3. with args no return val.
   4. no args with return val 
   If a function is declared after calling , a warning displayed of implicit funtion declaration
   2 types of function:- library function and user defined function*/