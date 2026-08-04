/* multiplication_table_of_11.c
 * Tabel perkalian 11. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("11 x %d = %d\n", i, 11 * i);
    }
    return 0;
}
