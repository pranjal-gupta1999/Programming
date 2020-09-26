#include <stdio.h>
#include <string.h>

int input=0,indexi=0;
void fun(char b[])
{
    for(int i=0;i<=strlen(b);i++)
    {
       if(b[i]=='<')
       {
           input=0;
           continue;
       }
       else if (b[i]=='>')
       {
           input =1;
           continue;
       }
       if(input==1)
       {
           b[indexi]=b[i];
           indexi++;
       }
    } 
    b[indexi]='\0';

    //trailing from start
       while(b[0]==' ')
       {
         for(int i=0;i< strlen(b);i++)
         {
             b[i]= b[i+1];
         }
       }

    //Remove the space from end
    while(b[strlen(b)-1] ==' ')   //last wala character other than null character thats why  -1
    {
        b[strlen(b) - 1] = '\0';
    }
     
}

int main()
{
    char a[]="<h1>    This is Pranjal Gupta    </h1>";
    fun(a);
    printf("The parsed string is: ~~%s~~",a);  //this is becoz changes in function also changes the array in main function.
    return 0;
}
