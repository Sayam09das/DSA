// Write a C program that implements a linear search algorithm to find a specific element in an integer array.
#include <stdio.h>

void linearSearch(int collection[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (collection[i] == key) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

int main() {
    int collection[] = {10, 20, 30, 40, 50, 60, 70};
    int key;
    int size = sizeof(collection) / sizeof(collection[0]);
    
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    
    linearSearch(collection, size, key);
    return 0;
}
