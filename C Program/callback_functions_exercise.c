#include <stdio.h>
#include <math.h>
float w,x,y,z;
float Edistance(float x1,float x2,float y1, float y2)
{
     float a= (float) pow((x2-x1),2);
     float b=(float) pow((y2-y1),2);
     float c= (float)sqrt(a+b);
     return c;
}
float AreaOfCircle(float (*fptr)(float,float,float,float) )
{
    printf("The area of circle is %f\n",(*fptr)(w,x,y,z));
}
int main()
{  
    printf("Enter the x1 value ");
    scanf("%f",&w);
    printf("Enter the x2 value ");
    scanf("%f",&x);
    printf("Enter the y1 value ");
    scanf("%f",&y);
    printf("Enter the y2 value ");
    scanf("%f",&z);
    float (*ptr)(float,float,float,float);
    ptr= Edistance;
    AreaOfCircle(ptr);
    return 0;
}
