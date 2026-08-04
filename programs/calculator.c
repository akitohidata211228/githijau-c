/*
 * calculator.c
 * Kalkulator dua angka via input.
 */

#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Angka pertama: ");
    scanf("%lf", &a);
    printf("Angka kedua: ");
    scanf("%lf", &b);
    printf("Operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Hasil: %.2f\n", a + b); break;
        case '-': printf("Hasil: %.2f\n", a - b); break;
        case '*': printf("Hasil: %.2f\n", a * b); break;
        case '/':
            if (b == 0) printf("Error: pembagian nol\n");
            else printf("Hasil: %.2f\n", a / b);
            break;
        default: printf("Operasi tidak dikenal\n");
    }
    return 0;
}
