// string_utils.c
#include "string_utils.h"
#include <string.h> // Pour utiliser strlen

// Fonction pour inverser un string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Fonction pour vérifier si un string est un palindrome
bool isPalindrome(const char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Si un caractère ne correspond pas, ce n'est pas un palindrome
        }
        start++;
        end--;
    }
    return true; // La chaîne est un palindrome
}
