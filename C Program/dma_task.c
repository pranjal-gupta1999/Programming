/*  #include <stdio.h>
#include <stdlib.h>
int main()
{   int n;
    char* ptr;
    ptr = (char*) malloc(sizeof(char));
    for(int i=0;i<3;i++)
    {
    printf("Welcome to ABC pvt ltd\n");
    printf("Enter the no. of characters in your id: ");
    scanf("%d",&n);
     ptr = (char*)realloc(ptr,(n+1)*sizeof(char));  // for \0 character
     printf("Enter your Id\n");
     scanf("%s",ptr);     //as ptr = &ptr[0] and string gets stored in base address
     printf("%s\n",ptr);       
    }
    return 0;
}
   */ 

  //char me enter button bhi enter buffer me jaakar ek input ho jaata hai. isse bachne ke liye hum use karte hai 
  // getchar() jo enter button ko apne andar sama leta hai

#include <stdio.h>
#include <stdlib.h>
int main()
{   int n;
    char* ptr;
    ptr = (char*) malloc(sizeof(char));
    for(int i=0;i<3;i++)
    {
    printf("Welcome to ABC pvt ltd\n");
    printf("Enter the no. of characters in your id: ");
    scanf("%d",&n);
    ptr = (char*)realloc(ptr,(n+1)*sizeof(char));  // for \0 character
    printf("Enter your Id\n");
    getchar();
     for(int m=0;m<n;m++)
     {
     scanf("%c",&ptr[m]);
     
     getchar();
     }

     for(int m=0;m<n;m++)
     {
        printf("%c",ptr[m]);
     }
    printf("\n");
    }
    free(ptr);   //to avoid memory leaks.
    return 0;
}