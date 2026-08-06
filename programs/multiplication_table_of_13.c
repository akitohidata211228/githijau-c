/* multiplication_table_of_13.c
 * Tabel perkalian 13. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("13 x %d = %d\n", i, 13 * i);
    }
    return 0;
}
