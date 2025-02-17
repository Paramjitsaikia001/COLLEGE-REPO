/*Compare two strings without using strcmp() 
*/
#include<stdio.h>
#include<stdio.h>
int main()
{
    int flag =0;
    int str1[100],str2[100];
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    for(int i=0;str1[i]!='\0' && str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    printf("strings are equal");
    else
    printf("string are not equal");
    return 0;
}