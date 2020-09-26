#include <stdio.h>
#include <string.h>
int main()
{
    char ar[]= "harry";
    printf("%d\n",strlen(ar));
    char ar1[5]= "harry";
    printf("%d\n",strlen(ar1)); //unexpected output comes due to the error. since this string has null character also so it should also counted.
    char ar2[6]= "harry"; //this is correct.
    printf("%d\n",strlen(ar2));
    return 0;
            
}
//in c we can take input of string in 3 ways   1. fgets(point to char array,size, stdin)   2. gets()  3. scanf("%s",ar) (only single word with it).