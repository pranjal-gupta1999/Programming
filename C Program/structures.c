/* Structure is the user defined data type in which different kinds of data types are used.
   structure members are accessed using dot operator.
   dot operator are also called " member access operator".   */
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[40];
}pranjal,harry;   //alter way to declare variable
int main()
{
  //struct Student pranjal,harry;  //structure variables can be declared either locally or globally
  pranjal.id = 12;
  pranjal.marks=230;
  pranjal.fav_char='1';
  strcpy(pranjal.name,"pranjal is a superboy");
  harry.id = 17;
  harry.marks=187;
  harry.fav_char='2';

  printf("Pranjal name is : %s\n",pranjal.name);
  printf("Pranjal has %d id\n",pranjal.id);
  printf("Pranjal has %d marks\n",pranjal.marks);
  printf("Pranjal has %d fav_char\n\n",pranjal.fav_char);

  printf("Harry has %d id\n",harry.id);
  printf("Harry has %d marks\n",harry.marks);
  printf("Harry has %d fav_char\n",harry.fav_char);
  return 0;
}
