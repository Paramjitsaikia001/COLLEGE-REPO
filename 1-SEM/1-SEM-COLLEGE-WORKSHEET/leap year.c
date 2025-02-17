#include<stdio.h>
int main(){
int year;
printf("enter a year=");
scanf("%d",&year);
if(year %400==0)
printf("it is a leap year");
else 
printf("it is not leap year");
return 1;
}
