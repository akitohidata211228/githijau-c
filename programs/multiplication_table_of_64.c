/* multiplication_table_of_64.c
 * Tabel perkalian 64. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("64 x %d = %d\n", i, 64 * i);
    }
    return 0;
}
