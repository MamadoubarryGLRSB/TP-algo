// linear_search.c
#include "linear_search.h"

// Iterative function for linear search
int linearSearch(int arr[], int n, int val) {
    for (int index = 0; index < n; index++) {
        if (arr[index] == val) {
            return index; 
        }
    }
    return -1;
}

int linearSearchRecursive(int arr[], int n, int val, int index) {
    // Base case: If we've reached the end of the array and haven't found val
    if (index >= n) {
        return -1;
    }

    // If the current element matches val, return the current index
    if (arr[index] == val) {
        return index;
    }

    return linearSearchRecursive(arr, n, val, index + 1);
}