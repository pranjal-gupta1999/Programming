/* c++ was introduced in 1979 by bjarne stroustrope as an extension of c.
advantage-- fast programs,high performance, more control over system resources.  
Header files- includes the name or constants (declaration) without thier functionality.So they are human readable.
they load during preprocessing. They have .h extension. (stores APIs)
Library - they contains functionality (definition) so they are machine readable. They load during linking.They have .lib extension

C and C++ are low level language as hardware ke nazdeek hai kyuki we can control system. machine language bhi low level hai
c++  is also provide high level language.

<< - insertion operator.
>> -  extraction operator.
:: - scope resolution operator use to access global variable and in functions.

g++ automatically object files link krdega but gcc does not have this feature.object files are actually machine codes but are not linked.

c was initially named as c with classes 
declaration is telling compilor about the var whereas the definition is declaration + memory allocation.
In C  the declaration and definition occurs at same time . eg   int a;
to avoid definition and need only declaration we use    extern int a;
 
Errors in C++
    1. syntax error -->  ; { etc lgana bhul jaate hai
    2. semantic error -->  illogical sense eg .  16=x;
    3.  linking error -->   when we call function and function definition is missing.
    4.  runtime error  ->   10/0
    5. logical error ->  if(x=y) or a+b/2;
  break , continue and return are called jump statements
Default arguments hamesha baad me likhte hai eg.  fun(int a,int b,int c=0) if not put like this then error occurs.

*/