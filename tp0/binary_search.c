// binary_search.c
#include "binary_search.h"

// Fonction de recherche binaire itérative
int binarySearch(int arr[], int beg, int end, int val) {
    while (beg <= end) {
        int mid = beg + (end - beg) / 2; // Calcul de l'index milieu

        // Vérifie si l'élément au milieu est égal à val
        if (arr[mid] == val) {
            return mid; // Trouvé, retourne l'index
        }

        // Si val est plus grand que l'élément au milieu, ignorer la moitié gauche
        if (arr[mid] < val) {
            beg = mid + 1;
        }
        // Si val est plus petit, ignorer la moitié droite
        else {
            end = mid - 1;
        }
    }
    return -1; // Si val n'est pas dans le tableau
}


// Fonction de recherche binaire récursive
int recursive_binarySearch(int arr[], int beg, int end, int val) {
    if (end >= beg) {
        int mid = beg + (end - beg) / 2;

        // Si l'élément est présent à l'indice mid du tableau
        if (arr[mid] == val) {
            return mid;
        }

        // Si l'élément est inférieur, rechercher dans le sous-tableau de gauche
        if (arr[mid] > val) {
            return recursive_binarySearch(arr, beg, mid - 1, val);
        }

        // Sinon, rechercher dans le sous-tableau de droite
        return recursive_binarySearch(arr, mid + 1, end, val);
    }

    // L'élément n'est pas présent dans le tableau
    return -1;
}