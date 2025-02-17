/* Write a program to implement struct in C. Create a structure of Student with RNo, 
Name and other credentials with proper datatype and print the same. */
#include <stdio.h>
#include <string.h>

// Define a structure for Student
struct Student {
    int RNo;         // Roll Number
    char Name[50];   // Name
    // Add other credentials as needed
};

int main() {
    // Create an instance of the Student structure
    struct Student student1;

    // Input values from the user
    printf("Enter Roll Number: ");
    scanf("%d", &student1.RNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", student1.Name);  // Using a space before %[^\n] to consume the newline character
    // Input other credentials as needed

    // Print the details of the student
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student1.RNo);
    printf("Name: %s\n", student1.Name);
    // Print other credentials as needed

    return 0;
}
