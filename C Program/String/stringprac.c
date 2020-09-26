/* string me hum pointer ko uska base address dete hai. aur string base address par hi work karta hai.
    isliye sirf ek pointer ne hi whole string ke address ko hold kar diya.      */

#include <stdio.h>
int main()
{
 char st[]= "harry";
 char * ptr = st;
 printf("%s",ptr);   
    return 0;
}
