/* multiplication_table_of_26.c
 * Tabel perkalian 26. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("26 x %d = %d\n", i, 26 * i);
    }
    return 0;
}
