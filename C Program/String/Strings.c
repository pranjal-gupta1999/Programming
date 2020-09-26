/* Strings are not data type in c, Actually it is a character array terminated by null(\0) character.
 we can make char array in 2 ways:
  1. char str[]="ram";
  2. char str[]= {'r','a','m','\0'};

  In the first way if we write like this then compilor automatically added \0 char into it.
  
  Here the array size must have (no. of char)+ 1(\0) characters.

  In the second way if we write like this then we need to manually add \0 character.
  for user input we have gets() and puts().  */
  
  
  /*
  
  #include <stdio.h>
  int main()
  {
    //  char str2[4]={'r','a','m'}; //it will run but it is not a valid statement
    char str2[4]={'r','a','m','\0'};
    char str[4] = "ram";
    // char str2[3]={'r','a','m'}; //output:-  ramram as it is not getting \0  (garbage value)
    //  char str[3] = "ram";   //array size is not more than no. of char, it is equals to so here output will be 
    // ram + (garbage value)
      int i=0;
      while(str2[i]!='\0')
      {
          printf("%c",str2[i]);
          i++;
      }
      return 0;
  }
      */           


//taking inputs
#include <stdio.h>
void fun(char str[])
{
   int i=0;
   while(str[i]!='\0')
   {
       printf("%c",str[i]);  //print the input
       i++; 
   }
}
int main()
{
   char st[45];  //we need to give it a size
   gets(st);   //take input , here space is allowed
   puts(st); //print the input
  // printf("%s\n",st[0]);  not posiible in string
   printf("%s\n",st);     // %s is string format specifier
   fun(st); 
    return 0;
}

  /*  Taking input using scanf in string me hum & use nahi krte ...sirf name likh dete hai kyuki 
     wese hi name se uska base address milta hai aur hume string keliye multiple address ki bhi zarurat nahi 
     hai
     if & ka use karenge to dikkat dega
     */    