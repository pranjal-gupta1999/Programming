/* storage class defines the scope, default initial value and lifetime of variable 
stoarge class are divided into 4 storage types --
1. Automatic storage class and variable- all variables are by default automatic.
  eg. int m; auto int m;  
 lifetime: till end of function
 scope: local
 default initial value:  uninitialised then return garbage value.


2. External storage class and variable- same as global var.
lifetime: throughout the program.
scope: all over program.
default value: 0.
eg. extern int ram;   //“extern” keyword is used to extend the visibility of function or variable.

3. Static storage class and variable -  
scope: block where they defined
lifetime: whole program
default value: 0
eg. static int harry;

4. Registor storage class and variable - 
lifetime: till end of function
scope: local
default initial value:  uninitialised then return garbage value.
the variable are stored in registors to have faster access. But we can only request cpu.if available it will allocate
it otherwise not.
eg. registor int m=6;
*/

#include <stdio.h>
int sum=0;
int main()
{   //int sum;
    extern int sum;    //global variable ko access karne ke liye extern lagate hai.
    printf("%d\n",sum);

    return 0;
}
