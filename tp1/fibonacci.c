// fibonacci.c
#include "fibonacci.h"

// Fonction itérative pour calculer le nième terme de Fibonacci
int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

// Fonction récursive pour calculer le nième terme de Fibonacci
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
