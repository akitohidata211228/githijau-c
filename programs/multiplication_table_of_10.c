/* multiplication_table_of_10.c
 * Tabel perkalian 10. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("10 x %d = %d\n", i, 10 * i);
    }
    return 0;
}
