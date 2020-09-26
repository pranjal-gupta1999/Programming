#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int decide(char b[])
{ 
    int input1,input2,l=0,m=0;
    for(int i=1;i<=3;i++)
    {
   input2= (rand()%3);
   printf("%s's turn : ",b);
   scanf("%d",&input1);
   printf("Computer's turn : %d\n",input2);
   if(input1==input2)
   {
       printf("Match tied!\n");
   }
   else if(input1==1 && input2==0 || input1==0 && input2==2 || input1==2 && input2==1)
   {
      l++;
   }
   else{ 
      m++;
   }
    }

  (l>m)? printf("%s is winner!\n",b) : printf("Computer is winner!\n");
   return 0;
}

int main()
{
    char a[20];
    srand(time(NULL));
    printf("Welcome to rock,paper & scissors game\n");
    printf("Press 0  for rock,1 for paper and 2 for scissor\n");
    printf("Enter your name Player 1\n");
    scanf("%s",a);
    decide(a);
    

    return 0;
}
