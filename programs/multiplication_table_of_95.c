/* multiplication_table_of_95.c
 * Tabel perkalian 95. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("95 x %d = %d\n", i, 95 * i);
    }
    return 0;
}
