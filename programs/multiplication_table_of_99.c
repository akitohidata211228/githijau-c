/* multiplication_table_of_99.c
 * Tabel perkalian 99. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("99 x %d = %d\n", i, 99 * i);
    }
    return 0;
}
