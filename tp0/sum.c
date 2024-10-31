#include "sum.h" 

int sum(int array[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += array[i];
    }
    return result; 
}

int sumRecursive(int array[], int n) {
    if (n <= 0) {
        return 0; 
    }
    return array[n - 1] + sumRecursive(array, n - 1); 
}
