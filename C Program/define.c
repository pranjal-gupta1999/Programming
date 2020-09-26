#include <stdio.h>
#define PI 3.14
#define SQUARE(r) r*r  //this is macro
int main()
{   
    printf("the value os PI is %f",PI*SQUARE(4));
    return 0;
}
//most important topic -- define preprocessing directive is used in debugging  the varible defined is faster to load as it is loaded during preprocessing.
// include me <>-- to load standard library files , "" to load general files.
/*
compilation in c compilor
1. preprocessing - macros opened, standard libraries load, comment ko hatate hai.
2. compilation - source code assembly level instructtion me badal jaate hai.
3. assembly - assembly instruction convert to machine level . but printf method does not resolve here.
4. linking- different functions ko eksaath jodkar ek program banata hai
5. loading- ram me load hota hai.  


preprocessor is an editor that modifies the copy of original source code.
*/ 
