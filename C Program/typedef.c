/* Typedef is a keyword which is used to give nicknames to a datatypes.
  these are very useful  for structures  and pointers*/



/* // case of structure
#include <stdio.h>
 typedef struct Polygon
{
    int sides;
    char name;

}data;      //giving the nickname for the structure here.
int main()
{   
    data triangle,square;
    triangle.sides= 3;
    square.sides = 4;
    triangle.name = 't';
    square.name = 's';
    printf("%d\n",triangle.sides);
    printf("%c\n",triangle.name);

    printf("%d\n",square.sides);
    printf("%c\n",square.name);
    typedef int go;
    go a=5;
    printf("%d",a);
    return 0;
}
     */

    #include <stdio.h>
    int main()
    {
        //int* a,b;    //here only a is the pointer variable but b is the only integer variable
        typedef int* Integerpointer;   //so we do like this
        Integerpointer a,b;
        int c=4;
        a= &c;
        b=&c;      //this will display the warning  if we do the first case
        printf("The address is: %d\n",a);  
        printf("The address is: %d\n",b);    
        return 0;
    }
    