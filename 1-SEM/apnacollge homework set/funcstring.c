#include <stdio.h>
#include<string.h>
int main()
{

  /* NOTE: normal format cannot printf multipul word so we use 3 function :
    1.gets(str) .str is our input and get is use to take input from user .but it donot use because it is outdated
    2.puts(str) .puts function is use to print the output
    3.fgets(str,n,file),this is the alternative of gets func. here str is input , n is size of the string , and file if stdin(standard input)*/


  char str[100]; // declaration
  printf("enter the string: ");
  fgets(str, 100, stdin);
  puts(str);


  /* NOTE: we can use a library function in string for is "string.h"
  strlen is a function for count the length of the string . it return long unsign value */

  int length = strlen(str); // convert the format of the strlen to int
  printf("the length of the string: %d", length);
  printf("\n");


  /*NOTE: another function is strcpy(string copy) strcpy(1ststr,2ndstr) the format is is copy the value of 2ndstr to 1ststr*/

  char str1[100];
  printf("\nenter 1st the string: ");
  fgets(str1,100,stdin);
  char str2[100];
  printf("enter 2nd the string: ");
  fgets(str2,100,stdin);
  strcpy(str2,str1);
  printf("str2: %s",str2);
printf("\n");
  
  // char newstr[]="newstr";
  // char oldstr[]="oldstr";
  // strcpy(newstr,oldstr);
  // puts(newstr);

  /*NOTE: strcat[string concatenation](firststr,laststr) is concatenate laststr to firststr */

  char firststr[100];
  printf("enter the first string: ");
  // fgets(firststr,100,stdin);  // if we use this and use strcat then newline is formed so we can use printf
  scanf("%s",&firststr);
  char laststr[100];
  printf("enter the second string: ");
  // fgets(laststr,100,stdin);
   scanf("%s",&laststr);
  // strcat(firststr,laststr);
  // printf("firststr: %s",firststr);
  puts(firststr);


  /*NOTE: another function strcmp. it compare two string*/
  /* if two string are equal then it return 0
     if 1st character of 1st string is bigger(as ASCII value) then is return +ve
     if  1st character of 1st string is smaller(as ASCII value) then is return -ve*/

  int comp = strcmp(firststr,laststr);
  printf("%d",comp);
}