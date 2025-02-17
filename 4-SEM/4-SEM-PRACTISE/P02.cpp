// write a program to insert a certain element in certain index in a array and also add to delete a element from the array using.


#include <iostream>

class Array {
private:
    int* arr;
    int size;
    int maxSize;

public:
    Array(int maxSize) : size(0), maxSize(maxSize) {
        arr = new int[maxSize];
    }

    ~Array() {
        delete[] arr;
    }

    void insertElement(int element, int index) {
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        ++size;
    }

    void insertElement(int element) {
        insertElement(element, size); // Insert at the end if no index is provided
    }

    void deleteElement(int index) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    }

    void deleteElement() {
        if (size > 0) {
            deleteElement(size - 1); // Delete the last element if no index is provided
        }
    }

    void printArray() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    int getSize() const {
        return size;
    }
};

int main() {
    const int MAX_SIZE = 100; // Define the maximum size of the array
    Array array(MAX_SIZE);

    // Inserting elements
    array.insertElement(1);
    array.insertElement(2);
    array.insertElement(3);
    array.insertElement(4);
    array.insertElement(5);

    std::cout << "Original array: ";
    array.printArray();

    // Inserting an element at a specific index
    int elementToInsert = 99;
    int indexToInsert = 2;
    array.insertElement(elementToInsert, indexToInsert);
    std::cout << "Array after insertion at index 2: ";
    array.printArray();

    // Deleting an element at a specific index
    int indexToDelete = 3;
    array.deleteElement(indexToDelete);
    std::cout << "Array after deletion at index 3: ";
    array.printArray();

    // Inserting an element at the end
    array.insertElement(88);
    std::cout << "Array after insertion at the end: ";
    array.printArray();

    // Deleting the last element
    array.deleteElement();
    std::cout << "Array after deleting the last element: ";
    array.printArray();

    return 0;
}
