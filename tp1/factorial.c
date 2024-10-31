// factorial.c
#include "factorial.h"


/*
cette fonction retourne la factoriel de n entiers
param : arr(n entiers)
complexite temporelle: O(n)
 */

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


int factorialRecursive(int n) {
    if (n <= 1) {
        return 1; 
    }
    return n * factorialRecursive(n - 1); 
}
