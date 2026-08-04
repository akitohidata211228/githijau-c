/* multiplication_table_of_7.c
 * Tabel perkalian 7. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("7 x %d = %d\n", i, 7 * i);
    }
    return 0;
}
