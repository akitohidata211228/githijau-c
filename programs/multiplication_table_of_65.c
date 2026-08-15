/* multiplication_table_of_65.c
 * Tabel perkalian 65. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("65 x %d = %d\n", i, 65 * i);
    }
    return 0;
}
