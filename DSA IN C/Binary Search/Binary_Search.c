// Write a C program to implement the binary search algorithm on a sorted array of integers.//
#include<stdio.h>
void binarySearch(int collection[], int key, int size){
    int left = 0;
    int right = size - 1;
    int mid;
    while(left <= right){
        mid = (left + right) /2;
        if(collection[mid] == key){
            printf("Found at index %d", mid);
            return;
        }
        else if (collection[mid] < key)
        {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    printf("Not found");
}
int main(){
    int collection[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int key;
    int size = sizeof(collection) / sizeof(collection[0]);
    printf("Enter the key to search: ");
    scanf("%d", &key);
    binarySearch(collection, key, size);
}