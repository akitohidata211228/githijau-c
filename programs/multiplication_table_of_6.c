/* multiplication_table_of_6.c
 * Tabel perkalian 6. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("6 x %d = %d\n", i, 6 * i);
    }
    return 0;
}
