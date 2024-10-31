/* TP 0: Algorithmes de Recherche, Récursivité et Manipulation de Tableaux

Ce TP couvre plusieurs algorithmes de recherche et de manipulation de tableaux, 
ainsi que des exercices de récursivité.

1. Calcul de la somme des n éléments d'un tableau (itératif) — Complexité: O(n)
2. Calcul de la somme des n éléments d'un tableau (récursif) — Complexité: O(n)
3. Calcul de la factorielle d'un nombre (itératif) — Complexité: O(n)
4. Calcul de la factorielle d'un nombre (récursif)
5. Recherche linéaire dans un tableau — Complexité: O(n)
6. Recherche binaire (ou dichotomique) dans un tableau trié — Complexité: O(log n)
7. Inversion des éléments d'un tableau
8. Inversion d’une chaîne de caractères et vérification de palindrome (ex: kayak, madam)
9. Recherche d'un sous-chaîne dans une chaîne donnée, avec retour de l'index si trouvée
   Exemple:
      sous-chaîne = "her";
      chaîne = "I am here"
      Retourne l'index de la première occurrence de "her" dans la chaîne.

10. Bonus:
           ***
           ***
           *******
   Calcul de la suite de Fibonacci: 1, 1, 2, 3, 5, 8... (afficher le n-ième élément)
*/


/* 
 * Fonction : Somme de n éléments d'un tableau
 * Description : Cette fonction retourne la somme des n premiers entiers d'un tableau
 * Paramètres : 
 *    - arr : tableau d'entiers
 * Complexité temporelle : O(n)
 */


#include <stdio.h>
#include "factorial.h"
#include "sum.h"
#include "linear_search.h"
#include "binary_search.h"
#include "reverse_array.h"
#include "fibonacci.h"



#include <stdio.h>
#include "factorial.h"
#include "sum.h"
#include "linear_search.h"
#include "binary_search.h"
#include "reverse_array.h"
#include "fibonacci.h"
#include "string_utils.h"
#include "string_search.h"

int main() {
    int number;
    int arr[] = {1, 2, 5, 9, 10, 14, 17, 24, 41};
    int n = sizeof(arr) / sizeof(arr[0]);
    char str[100];
    char substring[50];

    // 1. Calcul de la factorielle
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    int resultIterativeFactorial = factorial(number);
    printf("Factorial (Iterative): %d\n", resultIterativeFactorial);

    int resultRecursiveFactorial = factorialRecursive(number);
    printf("Factorial (Recursive): %d\n", resultRecursiveFactorial);

    // 2. Calcul de la somme
    int resultIterativeSum = sum(arr, n);
    printf("Sum of array elements (Iterative): %d\n", resultIterativeSum);

    int resultRecursiveSum = sumRecursive(arr, n);
    printf("Sum of array elements (Recursive): %d\n", resultRecursiveSum);

    // 3. Recherche linéaire
    int val = 5;
    int searchResult = linearSearch(arr, n, val);
    if (searchResult != -1) {
        printf("Linear Search: Value %d found at index: %d\n", val, searchResult);
    } else {
        printf("Linear Search: Value %d not found in the array\n", val);
    }

    // Recherche linéaire récursive
    int searchResultRecursive = linearSearchRecursive(arr, n, val, 0);
    if (searchResultRecursive != -1) {
        printf("Linear Search (Recursive): Value %d found at index: %d\n", val, searchResultRecursive);
    } else {
        printf("Linear Search (Recursive): Value %d not found in the array\n", val);
    }

    // 4. Recherche binaire
    int result = binarySearch(arr, 0, n - 1, val);
    if (result != -1) {
        printf("Binary Search: Value %d found at index: %d\n", val, result);
    } else {
        printf("Binary Search: Value %d not found in the array\n", val);
    }

    // Recherche binaire récursive
    int resultRecursive = recursive_binarySearch(arr, 0, n - 1, val);
    if (resultRecursive != -1) {
        printf("Binary Search (Recursive): Value %d found at index: %d\n", val, resultRecursive);
    } else {
        printf("Binary Search (Recursive): Value %d not found in the array\n", val);
    }

    // 5. Affichage et renversement du tableau
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 6. Calcul de Fibonacci
    printf("Enter an integer n to display the nth Fibonacci element: ");
    scanf("%d", &n);

    int resultIterative = fibonacciIterative(n);
    printf("Fibonacci (Iterative) for n = %d: %d\n", n, resultIterative);

    int resultRecursive2 = fibonacciRecursive(n);
    printf("Fibonacci (Recursive) for n = %d: %d\n", n, resultRecursive2);

    // 7. Palindrome et inversion de string
    printf("Entrez un string : ");
    scanf("%s", str); // Lecture du string (ne lit pas les espaces)

    // Vérification de palindrome
    if (isPalindrome(str)) {
        printf("C'est un palindrome\n");
    } else {
        printf("Pas un palindrome\n");
    }

    // Inversion du string
    reverseString(str);
    printf("String inversé : %s\n", str);

    // 8. Recherche de sous-chaîne
    printf("Entrez la chaîne principale : ");
    scanf("%s", str);

    printf("Entrez la sous-chaîne à rechercher : ");
    scanf("%s", substring);

    int index = findSubstring(str, substring);

    if (index != -1) {
        printf("La sous-chaîne \"%s\" a été trouvée à l'index %d dans \"%s\".\n", substring, index, str);
    } else {
        printf("La sous-chaîne \"%s\" n'a pas été trouvée dans \"%s\".\n", substring, str);
    }

    return 0;
}
