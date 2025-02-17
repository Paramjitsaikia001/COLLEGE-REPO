//	A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively. 

//iteration
#include<stdio.h>
int prime(int a){
	int i;
	
	for(i=2;i<a;i++){
		if(a%i==0)
		return 0;
	}
	return 1;
}
void primefactor(int a){
	int i,j;
	for(i=2;i<=a/2;i++){
	    int k=a%i;
	    if(k==0)
	    if(prime(i))
	    printf(" %d ",i);
		
		
	}
	
	}

	//by recursive
	void primefactors(int n,int i){
	if(i==2 && i%2==0)
	printf("2");
	 if(n%i==0){
	 if(prime(i))		
    printf(" %d ",i);
}
	primefactors(n,1+i);

}

int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	primefactor(a);


//by recursive
int n;
	printf("enter a number");
	scanf("%d",&n);
	primefactors(n,2);
}



