//take a string input from the user using %c

#include<stdio.h>
int main(){
    char str[200];
 char ch;
 int i=0;
 while(ch!='\n'){
    scanf("%c",&ch);
    str[i]=ch;
    i++;
 }
 str[i]='\0';
    puts(str);
}