/*
 * fibonacci.c
 * Deret Fibonacci: 15 suku pertama (rekursif).
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    const int terms = 15;
    for (int i = 0; i < terms; i++) {
        printf("%d%s", fibonacci(i), i < terms - 1 ? ", " : "\n");
    }
    return 0;
}
