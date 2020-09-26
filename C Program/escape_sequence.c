#include <stdio.h>
int main()
{   
    float a=11.234;
    printf("%10.2f\n",a);   //.1 means that 1 digit place after decimal.
         /*%a.1f --> this means that the output will shift a characters
     to the right.always count the char of variable then decide the value of 'a' if it is <= char in variable then no 
     space will be visible */

//format specifier means to tell compilor what type of data is in the variable.
 printf("%-10.5f this ",a);  //the -ve shows that the 2 words have about 10 chars space between them. 
return 0; 
}   //escape char
/* \n -> new line
   \t -> tab
   \a -> alarm
   \b -> backspace
   \r -> carriage return    
       //format specifier 
   %c -> char
   %d or %i -> int
   %f -> float
   %l -> long
   %lf -> double
   %LF -> long double
   %s -> string
   %x -> print hexadecimal integer
   %p -> address in hexadecimal form */

   /* const mean that cannot be changed to make it 
   1. const (type) (var);
   2. #define (var) = (value) */