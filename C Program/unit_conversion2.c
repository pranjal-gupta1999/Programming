#include <stdio.h>
int main()
{ float c,d,e,f,g;
 char a;
while(1)
{
    printf("\n\nWelcome to Units & Conversion\nPress A for kms -> miles\nPress B for inches -> foot\nPress C for cms -> inches\nPress D for pound -> kgs\nPress E for inches -> meters\nPress Q to exit: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'Q':
    goto end;
    break;

    case 'A':
    printf("Enter the value:");
    scanf("%f",&c);
    printf("The converted value is %f",c*1.62);
    break;

    case 'B':
    printf("Enter the value:");
    scanf("%f",&d);
    printf("The converted value is %f",d*0.08);
    break;

    case 'C':
    printf("Enter the value:");
    scanf("%f",&e);
    printf("The converted value is %f",e*0.4);
    break;

    case 'D':
    printf("Enter the value:");
    scanf("%f",&f); 
    printf("The converted value is %f",f*0.45);
    break;

    case 'E':
    printf("Enter the value:");
    scanf("%f",&g);
    printf("The converted value is %f",g*0.02);
    break;
   
    default:
    printf("The no. is invalid!");
    break;
    }
    
}
    end:
    return 0;
}
