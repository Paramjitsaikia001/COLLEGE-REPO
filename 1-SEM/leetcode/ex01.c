// // maximum depth of the parantheses of a string
// #include <stdio.h>

// int maxDepth(char *s) {
//     int depth = 0;
//     int maxDepth = 0;

//     while (*s != '\0') {
//         if (*s == '(') {
//             depth++;
//             if (depth > maxDepth) {
//                 maxDepth = depth;
//             }
//         } else if (*s == ')') {
//             if (depth > 0) {
//                 depth--;
//             } else {
//                 // If there is a closing parenthesis without an opening one
//                 printf("Error: Unmatched closing parenthesis\n");
//                 return -1; // Return -1 to indicate error
//             }
//         }
//         s++;
//     }

//     if (depth != 0) {
//         // If there are unmatched opening parentheses
//         printf("Error: Unmatched opening parenthesis\n");
//         return -1; // Return -1 to indicate error
//     }

//     return maxDepth;
// }

// int main() {
//     char input[] = "(1+1(12)+((16(23))))";
//     int depth = maxDepth(input);
//     if (depth != -1) {
//         printf("Maximum depth of parentheses: %d\n", depth);
//     }
//     return 0;
// }
#include<stdio.h>
int maxDepth(char* s) {
    int depth=0;
    int maxdepth=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            depth++;
            if(depth>maxdepth){
                maxdepth=depth;
            }
        }
        else if(s[i]==')'){
            if(depth>0){
                depth--;
            }
            else{
                printf("error");
                return 1;
            }

        }
        
    }
    return maxdepth;
}
int main(){
    char str[100];
    printf("enter the string:");
    scanf("%s",str);
    printf("%d",maxDepth(str));
}