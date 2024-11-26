// bubble_sort.c
#include "bubble_sort.h"

// Fonction de tri à bulles
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; // Variable pour suivre si des échanges ont eu lieu

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Échange des éléments si nécessaire
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // Indique qu'un échange a eu lieu
            }
        }
        // Si aucun échange n'a eu lieu, le tableau est trié
        if (swapped == 0) {
            break;
        }
    }
}


// Fonction pour effectuer un passage de tri à bulles récursif

void bubbleSortRecursive(int arr[], int n) {
    // Cas de base : Si le tableau n'a qu'un seul élément ou est vide
    if (n <= 1) {
        return;
    }

    // Passage pour faire remonter le plus grand élément à la fin
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Échange des éléments si nécessaire
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    // Appel récursif pour trier les n-1 premiers éléments
    bubbleSortRecursive(arr, n - 1);
}