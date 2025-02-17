#include<stdio.h>
// void print_string(char firstname[],char lastname[]){
//     printf("%s",firstname);
//     printf("\n");
//     printf("%s",lastname);
// }

// void print_string(char firstName[],char lastName[]){
//     for(int i=0;firstName[i]!='\0';i++){
// printf("%c",firstName[i]);
//     }
//     printf("\n");
//     for(int i=0;lastName[i]!='\0';i++){
// printf("%c",lastName[i]);
//     }
// }

void print_string(char string[]){
    for(int i=0;string[i]!='\0';i++){
printf("%c",string[i]);
    }
}
int main(){
    char firstname[]="Paramjit";
    char lastname[]="Saikia";
    print_string(firstname);
    printf(" ");
    print_string(lastname);
}