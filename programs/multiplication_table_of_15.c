/* multiplication_table_of_15.c
 * Tabel perkalian 15. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("15 x %d = %d\n", i, 15 * i);
    }
    return 0;
}
