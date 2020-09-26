#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    printf("The no. between 0 an 100 is %d",rand()%100);
    return 0;
}
