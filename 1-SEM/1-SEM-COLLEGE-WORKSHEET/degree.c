#include<stdio.h>
int main(){
	int A,B;
 	printf("marks in A ");
 	scanf("%d",&A);
 	printf("mark of B");
 	scanf("%d",&B);
 	if((A>=55 && B>=45 )|| (B>=55 && A>=45) )
 	printf("PASSED");
 	else if(B<45 && A>65)
 	printf("student is allow to reappear in B");
 	else 
 	printf("FAILED");
   return 0;
}
