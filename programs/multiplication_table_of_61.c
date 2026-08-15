/* multiplication_table_of_61.c
 * Tabel perkalian 61. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("61 x %d = %d\n", i, 61 * i);
    }
    return 0;
}
