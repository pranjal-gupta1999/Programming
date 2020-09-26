#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20],st3[20];
    gets(st1);
    gets(st3);
    char st2[]="\tis friend of\t";
    strcat(st1,st2);     //new value gets stored in the first value ie st1
    printf("%s",strcat(st1,st3));
    return 0;
}
