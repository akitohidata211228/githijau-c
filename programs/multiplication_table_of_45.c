/* multiplication_table_of_45.c
 * Tabel perkalian 45. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("45 x %d = %d\n", i, 45 * i);
    }
    return 0;
}
