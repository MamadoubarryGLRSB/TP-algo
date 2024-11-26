#include "merge_sort.h"

// Fonction pour fusionner deux sous-tableaux triés
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Création de sous-tableaux temporaires
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Fusion des sous-tableaux
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copie des éléments restants de L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copie des éléments restants de R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fonction de tri par fusion
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Tri des deux moitiés
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Fusion des deux moitiés triées
        merge(arr, left, mid, right);
    }
}

/*
 * Algorithme : Tri par fusion (Merge Sort)
 * Complexité temporelle :
 *   - Meilleur cas, pire cas et cas moyen : O(n log n)
 * Complexité spatiale : O(n)
 */
