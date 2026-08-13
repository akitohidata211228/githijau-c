/* multiplication_table_of_49.c
 * Tabel perkalian 49. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("49 x %d = %d\n", i, 49 * i);
    }
    return 0;
}
