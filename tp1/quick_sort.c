#include "quick_sort.h"

// Fonction pour partitionner le tableau
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choix du pivot (dernier élément)
    int i = low - 1;       // Indice de l'élément le plus petit

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Échange des éléments
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Placer le pivot à sa position finale
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1; // Retourne l'indice du pivot
}

// Fonction de tri rapide
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition du tableau
        int pi = partition(arr, low, high);

        // Tri récursif des sous-tableaux
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/*
 * Algorithme : Tri rapide (Quick Sort)
 * Complexité temporelle :
 *   - Meilleur cas et cas moyen : O(n log n)
 *   - Pire cas : O(n^2)
 * Complexité spatiale : O(log n) (appel récursif sur la pile)
 */
