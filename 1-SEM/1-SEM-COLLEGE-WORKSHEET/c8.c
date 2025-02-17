/* Write a C program that opens a file in append mode and allows the user to add text to 
the end of the file.*/
#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Open the file in append mode
    file = fopen("helloworld.c", "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Get text from the user
    printf("Enter text to add to the file: ");
    fgets(text, sizeof(text), stdin);

    // Add text to the end of the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    printf("Text added to the file successfully.\n");

    return 0;
}

