#include <stdio.h>   
#include <stdlib.h>   //exit(0) ko use karne k liye
float convert()
        {   float b;
            printf("Enter the value:");
            scanf("%f",&b);
            return b;
        }
        void end()
        { exit(0);
        }
void intellisense()
    {
        char a;
        printf("\n\nWelcome to Units & Conversion\nPress A for kms -> miles\nPress B for inches -> foot\nPress C for cms -> inches\nPress D for pound -> kgs\nPress E for inches -> meters\nPress Q to exit: ");
        scanf("%c",&a);
        if(a=='Q')
        {
            end();
        }
        if(a=='A')
        {
        float l=1.62*convert(); 
        printf("The converted value is %f",l);
        
        }
        if(a=='B')
        {
        float l=0.08*convert();   
        printf("The converted value is %f",l);
        
        }
        if(a=='C')
        {
        float l=0.4*convert(); 
        printf("The converted value is %f",l);
        
        }
        if(a=='D')
        {
        float l=0.45*convert(); 
        printf("The converted value is %f",l);
        
        }
        if(a=='E')
        {
        float l=0.02*convert(); 
        printf("The converted value is %f",l);
        
        }   
    }
void main()
{  while(1)
{
   intellisense();   
}
}
//return 0 statement breaks the flow of function and return it to the calling function.
//in void function we can use 'return' to jump out from that function.