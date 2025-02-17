// salting-it is secret number of company that add in any portion in your password in nay portion
//Q) find the salted form of a password entered by user if the salt is "123"& added at the end.

#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main(){
    char password[200];
    printf("enter your password: ");
    scanf("%s",&password);
salting(password);
}

void salting(char password[]){
    char salt[]="123";
    char newpassword[200];
    strcpy(newpassword,password);//copy password to newpasseword
    strcat(newpassword,salt);//concatenate newpassword and salt
    printf("%s",newpassword);
}