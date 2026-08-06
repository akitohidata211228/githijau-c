/* multiplication_table_of_16.c
 * Tabel perkalian 16. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("16 x %d = %d\n", i, 16 * i);
    }
    return 0;
}
