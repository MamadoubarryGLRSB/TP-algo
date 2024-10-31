// string_search.c
#include "string_search.h"
#include <string.h> // Pour strlen

// Fonction pour trouver la première occurrence de substring dans str
int findSubstring(const char str[], const char substring[]) {
    int strLength = strlen(str);
    int subLength = strlen(substring);

    // Parcours de str pour trouver la première occurrence de substring
    for (int i = 0; i <= strLength - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (str[i + j] != substring[j]) {
                break; // Si les caractères ne correspondent pas, arrêter la comparaison
            }
        }
        if (j == subLength) {
            return i; // Retourne l'index de la première occurrence
        }
    }
    return -1; // Si substring n'est pas trouvé dans str
}
