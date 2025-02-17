/*Concatenate two strings using strcat() function. */
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}