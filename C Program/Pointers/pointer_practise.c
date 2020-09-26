#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4};
    //int b[] = a or a[];   we cannot store one array into another array like this
    int *ptr = a;
    printf("%d\n", &ptr);
    printf("%d\n", ptr);
    printf("%d\n", a);     
    printf("%d\n", *ptr);
    printf("%d\n",&a[0]);

    char ar[] = "harry";
    printf("%s\n", ar);
    char *array = ar;
    for (int i=0;i<=5;i++)
    {
       printf("%c", *(array+i)); 
    //printf("%c", array);   //it returns garbage value
    } 
    printf("\n");
    printf("%d\n", array);   
    printf("%s\n", array);
    printf("%p\n", array);
    printf("%d\n", &ar); //returning the address of the first element at 0th position.
    printf("%d\n", ar);
    printf("%d\n", ar[0]); //return the ascii value of 1st element.
    printf("%d\n", &ar[0]);
    printf("%d\n", ar[1]);


    int l = 1;
    int m = l;
    l++;
    printf("%d\n", m);

    printf("%d\n", l);
    return 0;
}