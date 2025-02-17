/* Write a program to find sum of n elements entered by the user. To write this program, 
allocate memory dynamically using malloc() / calloc() functions or new operator. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1; // Exit with an error code
    }

    // Input elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display the sum
    printf("Sum of %d elements: %d\n", n, sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
