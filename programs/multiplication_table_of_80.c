/* multiplication_table_of_80.c
 * Tabel perkalian 80. */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("80 x %d = %d\n", i, 80 * i);
    }
    return 0;
}
