#include <stdio.h>
int main()
{
  
    char a[30];
    printf("Enter string\n");
    fgets(a,30,stdin);   //this is used as gets() is deprecated in latest gcc.
    printf("%s",a);
    return 0;
}
