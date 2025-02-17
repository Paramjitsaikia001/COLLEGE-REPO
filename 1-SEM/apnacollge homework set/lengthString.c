#include<Stdio.h>


// void lengthString(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
// count++;
//     }
//     printf("%d",count);
// }

int countstring(char str[]){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    // lengthString(str);
    printf("%d",countstring(str));
}