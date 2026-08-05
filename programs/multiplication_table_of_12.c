/* multiplication_table_of_12.c
 * Tabel perkalian 12. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("12 x %d = %d\n", i, 12 * i);
    }
    return 0;
}
