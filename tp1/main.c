/*
 * Algorithme : Tri à bulles (Bubble Sort)
 * Complexité temporelle :
 *   - Meilleur cas : O(n) si le tableau est déjà trié
 *   - Pire cas et cas moyen : O(n^2), car chaque élément est comparé avec tous les autres
 */

#include <stdio.h>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

// Fonction pour afficher le tableau
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr1[] = {9, 7, 5, 3, 1, 8, 6};
    int arr2[] = {1, 3, 5, 7, 8, 9, 2};
    int arr3[] = {10, 2, 8, 6, 4, 14, 12};
    int arr4[] = {20, 15, 10, 5, 0};
    int arr5[] = {3, 6, 8, 10, 1, 2, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    // Test du tri à bulles itératif
    printf("********** TRI A BULLES ITERATIF **********\n");
    printf("Tableau original : ");
    printArray(arr1, n);
    bubbleSort(arr1, n);
    printf("Tableau trié : ");
    printArray(arr1, n);
    printf("------------------------------------------\n\n");

    // Test du tri à bulles récursif
    printf("********** TRI A BULLES RECURSIF **********\n");
    printf("Tableau original : ");
    printArray(arr2, n);
    bubbleSortRecursive(arr2, n);
    printf("Tableau trié : ");
    printArray(arr2, n);
    printf("------------------------------------------\n\n");

    // Test pour le tri par sélection
    printf("********** TRI PAR SELECTION **********\n");
    printf("Tableau original : ");
    printArray(arr3, n);
    selectionSort(arr3, n);
    printf("Tableau trié : ");
    printArray(arr3, n);
    printf("--------------------------------------\n\n");

    // Test du tri par fusion
    printf("********** TRI PAR FUSION **********\n");
    printf("Tableau original : ");
    printArray(arr4, n);
    mergeSort(arr4, 0, n - 1);
    printf("Tableau trié : ");
    printArray(arr4, n);
    printf("-----------------------------------\n");


      // Test du tri rapide
    printf("********** TRI RAPIDE **********\n");
    printf("Tableau original : ");
    printArray(arr5, n);
    quickSort(arr5, 0, n - 1);
    printf("Tableau trié : ");
    printArray(arr5, n);
    printf("--------------------------------\n");

    return 0;
}
