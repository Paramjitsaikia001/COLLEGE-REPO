/*Reading and Displaying Contents of a File:*/
#include <stdio.h>
int main()
{
    FILE *file;
    file=fopen("helloworld.c","r");
    if(file ==NULL){
    printf("the file cannot open");
    return 1;
    }

    char ch;
    printf("the contants are:\n");
    while((ch=fgetc(file))!=    EOF)
    {
        putchar(ch);
    }
    fclose(file);
    return 0;
}