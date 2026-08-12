/* multiplication_table_of_41.c
 * Tabel perkalian 41. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("41 x %d = %d\n", i, 41 * i);
    }
    return 0;
}
