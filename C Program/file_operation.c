/* file is used to store data or info permanently.file operations--
1. creating  2. opening  3. closing  4. read & write .  fscanf , fprintf,fopen, fclose are in stdio.h 
If the file is in write mode it can also create a file if the file is not available.
for both read and write mode we use r+
a+ will also do the same only writing is done in append only. */


#include <stdio.h>
#include <string.h>
int main()
{
 FILE *ptr =NULL;
 //char pt[30];
 //Reading a file   the content should not contain spaces 
//  ptr = fopen("test.txt","r");
//  fscanf(ptr,"%s",pt);   //all content from test.txt(before any space) gets stored in pt string.
//  printf("The file has %s",pt); 

//writing to a file
char pt[60] = "This text is produced in file_operation.c";
ptr= fopen("test.txt","w");  //since te mode is write so all data is overwrited. to avoid overwrite we use a(append) mode.
if(ptr!=NULL)
{
    if(strlen(pt)>0)   //the conditions are not necessary, only to make more informative and clear.
    { 
    printf("The file has been changed!.");
    fprintf(ptr,"%s",pt);   //all content of pt string gets pasted into test.txt file(overwrited mode).
    }
}



fclose(ptr);
    return 0;
}

/*
#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    // char  c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );


    char str[4];
    fgets(str, 5, ptr);  // here 5 is the length that means 4 char+\0 char displays,This is proper syntax.
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is harry",ptr);



    fclose(ptr);
    return 0;
}
*/