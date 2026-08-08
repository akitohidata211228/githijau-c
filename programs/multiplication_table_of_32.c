/* multiplication_table_of_32.c
 * Tabel perkalian 32. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("32 x %d = %d\n", i, 32 * i);
    }
    return 0;
}
