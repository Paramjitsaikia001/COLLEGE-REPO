#include <stdio.h>

int main() {
    char word[100];
    int count = 0;

    // Input a word from the user
    printf("Enter a word: ");
    scanf("%s", word);

    // Count the number of characters in the word
    while (word[count] != '\0') {
        count++;
    }

    // Display the result
    printf("Number of characters in the word: %d\n", count);

    return 0;
}
