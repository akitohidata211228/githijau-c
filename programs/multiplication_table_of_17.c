/* multiplication_table_of_17.c
 * Tabel perkalian 17. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("17 x %d = %d\n", i, 17 * i);
    }
    return 0;
}
