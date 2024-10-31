// reverse_array.c
#include "reverse_array.h"

// Fonction pour renverser les éléments d'un tableau
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Boucle pour échanger les éléments du début et de la fin
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
