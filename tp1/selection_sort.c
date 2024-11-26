#include "selection_sort.h"

// Fonction de tri par sélection
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Trouver l'indice du plus petit élément dans le sous-tableau non trié
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Échanger le plus petit élément avec le premier élément non trié
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

/*
 * Algorithme : Tri par sélection (Selection Sort)
 * Complexité temporelle :
 *   - Meilleur cas, pire cas et cas moyen : O(n^2), car on effectue toujours n * (n-1) / 2 comparaisons
 *   - Complexité spatiale : O(1) (en place, sans mémoire supplémentaire)
 */
