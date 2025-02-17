// #include<stdio.h>
// void square_root(float x)
// {
// float i=1.0;
//  printf("the square root of %.2f= ",x);
// while(i<x){
//     if(i*i==x){
//         printf("%.2f",i);
//     }
//     i=i+0.1;
// }
// }
// int main(){
//     float num;
//     printf("enter the number: ");
//     scanf("%f",&num);
//    square_root(num);
//    return 0;
// }
#include <stdio.h>

void square_root(float x) {
    if (x < 0) {
        printf("Square root of a negative number is not real.\n");
        return;
    }

    float epsilon = 0.00001; // Precision
    float guess = x; // Initial guess

    // Newton's method for finding square root
    while ((guess * guess - x) > epsilon) {
        guess = (guess + x / guess) / 2;
    }

    printf("%.2f", guess);
}

int main() {
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    
    printf("The square root of %.2f = ", num);
    square_root(num);
    printf("\n");

    return 0;
}

