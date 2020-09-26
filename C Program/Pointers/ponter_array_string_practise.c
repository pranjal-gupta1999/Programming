#include <stdio.h>
void fun(char *ptr)
{
    for(int i=0;i<5;i++)
    {
      printf("%c",*(ptr + i));
    }   
} 
int main()
{ 
    int a[]= {1,2,3};
    int b=2;
    char str[] = "harry";
    fun(str);
    int s[]={1,2,3,'a',1.23};
    printf("%d\n",s);
    
    for(int i=0;i<5;i++)
    { 
      printf("%d\t",s[i]);
    }  
    return 0;
}
