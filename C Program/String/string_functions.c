/* string.h header file have
 1. strcat()  -> concatenation
 2. strlen() -> length of string
 3. strrev() -> reverse of string
 4. strcpy()  -> copy string to another one.
 5. strcmp(a,b) -> compare the strings and return either 0 or non zero value on basis of b-a(difference between the first element of both a & b).
 after using these functions, the intial value gets changed.
 */
#include <stdio.h> 
#include <string.h>
int main()
{
    char st1[]="pranjal";
    char st2[]="gupta";
    char st3[40];
    printf("The strcmp for st1 st2 reverse is %d\n",strcmp(st1,st2));
    // st3 = strcat(st1,st2);  This will show error
    // printf("The catenation is: %s\n",strcat(st1,st2));
    printf("The length is: %d\n",strlen(st1));
    printf("The length is: %d\n",strlen(st2));
    puts(strrev(st1));
    puts(strrev(st2));
    puts(strcpy(st3,strcat(st1, st2)));
   
    return 0;
}
