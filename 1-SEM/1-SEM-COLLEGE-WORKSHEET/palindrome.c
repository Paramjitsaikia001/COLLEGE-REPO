#include<stdio.h>

int palindrome(char word[])
{
 
    int n=0;

    while(word[n]!='\0')
    {
        n++;
    }


  int i, j;

    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (word[i] != word[j])
        return 0;
    }
     
    return 1;   
}
int main()
{
    char word[100];
    printf("enter the word:");
    scanf("%s",word);
    if(palindrome(word))
   {
    printf("palindrome");
   }
   else
   {
   printf("not palinedrome");
   }
    return 0;

}