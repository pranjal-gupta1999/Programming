#include <stdio.h>
int main()
{
    printf("The time is %s\n",__TIME__);
    printf("The FILE NAME is %s\n",__FILE__);
    printf("The line no is %d\n",__LINE__);
    printf("The ANSI is %d\n",__STDC__); 
    return 0;
}
