#include<stdio.h>
int main(){

    /*if we declare a string as a pointer like *str ,then we can change the value of string but if we 
    declare like str[] then we cannot change it value*/

    char *str="Paramjt saikia";
    puts(str);

    str="debojti bora";
    puts(str);
}