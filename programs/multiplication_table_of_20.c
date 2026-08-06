/* multiplication_table_of_20.c
 * Tabel perkalian 20. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("20 x %d = %d\n", i, 20 * i);
    }
    return 0;
}
